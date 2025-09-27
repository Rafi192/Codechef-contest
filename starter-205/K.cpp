#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        bool good = false;

        for (int i = 0; i + 2 < s.size(); i++) { // +2 because substring length is 3
            if ((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') ||
                (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')) {
                good = true;
                break;
            }
        }

        if (good)
            cout << "Good\n";
        else
            cout << "Bad\n";
    }
    return 0;
}
