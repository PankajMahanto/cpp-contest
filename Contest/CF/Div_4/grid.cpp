#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<char>> grid(n, vector<char>(n));

        // Read the grid
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> grid[i][j];
            }
        }

        // Initialize the reduced grid
        int reducedSize = n / k;
        vector<vector<char>> reducedGrid(reducedSize, vector<char>(reducedSize));

        // Populate the reduced grid
        for (int i = 0; i < reducedSize; ++i) {
            for (int j = 0; j < reducedSize; ++j) {
                // Set the value of the reduced grid cell to the value of any cell in the k x k block
                reducedGrid[i][j] = grid[i * k][j * k];
            }
        }

        // Output the reduced grid
        for (int i = 0; i < reducedSize; ++i) {
            for (int j = 0; j < reducedSize; ++j) {
                cout << reducedGrid[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}
