#include <bits/stdc++.h>
using namespace std;

// Function to check if it is possible to split each pile into X stones
bool canSplitPiles(int piles[], int n) {
    int gcd = piles[0]; // Initialize gcd with first pile
    for (int i = 1; i < n; ++i) {
        gcd = __gcd(gcd, piles[i]); // Calculate gcd with each pile
    }
    if (gcd == 1) {
        return false; // If gcd is 1, it's not possible to split each pile into X stones
    }
    return true; // Otherwise, it's possible to split
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int piles[N];
        for (int i = 0; i < N; ++i) {
            cin >> piles[i];
        }

        if (canSplitPiles(piles, N)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
