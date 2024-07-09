#include <bits/stdc++.h>
#include <string>

using namespace std;
#define ll long long 

void solve() {
  
     int n;
        cin >> n;

        vector<vector<char>> grid(n, vector<char>(n));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }

        

        // Check if the shape is a square
        bool isSquare = true;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == '1' && (j == 0 || grid[i][j - 1] == '0')) {
                    for (int k = j + 1; k < n; ++k) {
                        if (grid[i][k] == '0') {
                            isSquare = false;
                            break;
                        }
                    }
                }
            }
        }

        if (isSquare) {
            cout << "SQUARE" << "\n";
        } else {
            cout << "TRIANGLE" << "\n";
        }
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
