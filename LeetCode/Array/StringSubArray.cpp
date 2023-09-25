#include <iostream>
#include <unordered_map>
using namespace std;

int longestSubstringKDistinct(string s, int k) {
    int maxLength = 0;
    int left = 0; // Left pointer of the sliding window
    unordered_map<char, int> charCount; // To keep track of character counts

    for (int right = 0; right < s.length(); right++) {
        charCount[s[right]]++; // Add the character at the right pointer to the count

        // If the number of distinct characters exceeds K, move the left pointer
        while (charCount.size() > k) {
            charCount[s[left]]--; // Remove the character at the left pointer from the count
            if (charCount[s[left]] == 0) {
                charCount.erase(s[left]); // If count becomes zero, remove from the map
            }
            left++; // Move the left pointer to the right
        }

        // Update the maximum length
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

int main() {
    string s = "eceba";
    int k = 2;
    int result = longestSubstringKDistinct(s, k);
    cout << "Longest substring with at most " << k << " distinct characters: " << result << endl;
    return 0;
}
