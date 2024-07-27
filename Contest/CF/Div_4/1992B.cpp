#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int min_operations_to_restore_casserole(int n, int k, vector<int>& pieces) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int piece : pieces) {
        minHeap.push(piece);
    }

    int operations = 0;

    while (minHeap.size() > 1) {
        int smallest = minHeap.top();
        minHeap.pop();

        if (smallest == 1) {
            int secondSmallest = minHeap.top();
            minHeap.pop();
            minHeap.push(secondSmallest + 1);
        } else {
            minHeap.push(1);
            minHeap.push(smallest - 1);
        }

        operations++;
    }

    return operations;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> pieces(k);
        for (int i = 0; i < k; ++i) {
            cin >> pieces[i];
        }
        
        cout << min_operations_to_restore_casserole(n, k, pieces) << '\n';
    }
    
    return 0;
}
