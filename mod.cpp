#include <bits/stdc++.h>
using namespace std;

// Function to calculate (base^exponent) % mod
long long powerMod(long long base, long long exponent, long long mod) {
    if (exponent == 0) {
        return 1;
    }
    long long result = 1;
    base = base % mod;
    while (exponent > 0) {
        // If exponent is odd, multiply base with result
        if (exponent % 2 == 1) {
            result = (result * base) % mod;
        }
        // exponent must be even now
        exponent = exponent >> 1; // Divide exponent by 2
        base = (base * base) % mod;
    }
    return result;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;

    while (T--) {
        long long A, B, C, P;
        cin >> A >> B >> C >> P;

        // Calculate (A^B) % C using modular exponentiation
        long long result = powerMod(A, B, C);

        // Calculate the final result (result^C) % P
        long long finalResult = powerMod(result, C, P);

        cout << finalResult << endl;
    }
    return 0;
}
