#include <iostream>
#include <string>

using namespace std;

bool canMatchTemplate(const string& a, const string& b, const string& c) {
    int n = a.length();
    for (int i = 0; i < n; ++i) {
        // If characters are same in a and b, the template should be lowercase and match the characters
        // If characters are different in a and b, the template should be uppercase and not match the characters
        if ((a[i] == b[i] && a[i] != c[i] && b[i] != c[i]) || (a[i] != b[i] && a[i] == c[i] && b[i] == c[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string a, b, c;
        cin >> a >> b >> c;

        if (canMatchTemplate(a, b, c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
