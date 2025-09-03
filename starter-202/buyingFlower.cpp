#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        int coins = 0;

        if (N % 3 == 0) {
            // Case 1: divisible by 3
            coins = (N / 3) * 5;
        } 
        else if (N % 3 == 2) {
            // Case 2: remainder 2 -> add one 2-flower pack
            coins = (N / 3) * 5 + 4;
        } 
        else {
            // Case 3: remainder 1
            // Replace one 3-pack with two 2-packs
            coins = ((N / 3) - 1) * 5 + 8;
        }

        cout << coins << '\n';
    }
    return 0;
}
