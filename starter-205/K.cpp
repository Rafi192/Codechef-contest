#include <iostream>
#include <vector>
using namespace std;

int main() {

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        // Substrings we want to check
        vector<string> substrings = {"010", "101"};

        // Loop through each substring
        for (string sub : substrings) {
            bool found = false; // Flag to track if substring exists

            // Loop through main string s
            for (int i = 0; i <= s.size() - sub.size(); i++) {
                int j = 0;
                // Check character by character
                while (j < sub.size() && s[i + j] == sub[j]) {
                    j++;
                }
                if (j == sub.size()) {
                    found = true; // Full substring matched
                    break;
                }
            }

            // Print result
            if (found)
                cout << "Substring \"" << sub << "\" exists in the string." << endl;
            else
                cout << "Substring \"" << sub << "\" does NOT exist in the string." << endl;
        }
    }

    return 0;
}
