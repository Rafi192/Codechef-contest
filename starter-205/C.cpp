#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        string S;
        cin >> S;

        int alice = 0, bob = 0;
        for (char ch : S) {
            if (ch == '1') alice++;
            else bob++;
        }

        int remaining = N - M;
        int diff = abs(alice - bob);

        if (diff <= remaining && (remaining - diff) % 2 == 0) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
