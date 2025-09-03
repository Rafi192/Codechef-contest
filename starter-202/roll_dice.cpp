#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int x, y;
        cin >> x >> y;
        int total_moves = x;

        int dice1[6];
        // int dice2[6];
        for (int i = 0; i < 6; i++) {
            dice1[i] = y + (i + 1);
            // dice2[i] = y +i +1;
        }

        bool found = false;
        for (int i = 0; i < 6; i++) {
            for (int j = i + 1; j < 6; j++) {
                if (total_moves + dice1[i] + dice1[j] == 50) {
                    cout << "YES\n";
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        if (!found) {
            cout << "NO\n";
        }
    }
    return 0;
}
