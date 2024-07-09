#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compareCards(pair<char, char>& card1, pair<char, char>& card2, char trump_suit) {
    if (card1.second == trump_suit && card2.second != trump_suit) {
        return true;
    } else if (card1.second != trump_suit && card2.second == trump_suit) {
        return false;
    } else {
        return card1.first > card2.first;
    }
}

vector<pair<pair<char, char>, pair<char, char>>> playGame(int n, char trump_suit, vector<pair<char, char>>& cards) {
    vector<pair<pair<char, char>, pair<char, char>>> rounds;
    vector<pair<char, char>> players_cards[4];

    for (auto& card : cards) {
        players_cards[card.second - 'C'].push_back(card);
    }

    for (int i = 0; i < n; i++) {
        auto player1_card = players_cards[trump_suit - 'C'].back();
        players_cards[trump_suit - 'C'].pop_back();

        auto trump_beat_card = make_pair('\0', '\0');
        for (char suit : "CDHS") {
            if (suit == trump_suit) continue;
            if (!players_cards[suit - 'C'].empty()) {
                trump_beat_card = players_cards[suit - 'C'].back();
                players_cards[suit - 'C'].pop_back();
                break;
            }
        }

        if (compareCards(player1_card, trump_beat_card, trump_suit)) {
            rounds.push_back({player1_card, trump_beat_card});
        } else {
            rounds.push_back({player1_card, players_cards[player1_card.second - 'C'].back()});
            players_cards[player1_card.second - 'C'].pop_back();
        }
    }

    return rounds;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        char trump_suit;
        cin >> trump_suit;

        vector<pair<char, char>> cards(2 * n);
        for (int i = 0; i < 2 * n; i++) {
            cin >> cards[i].first >> cards[i].second;
        }

        auto rounds = playGame(n, trump_suit, cards);

        if (!rounds.empty()) {
            for (auto& round : rounds) {
                cout << round.first.first << round.first.second << " " << round.second.first << round.second.second << endl;
            }
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    }

    return 0;
}
