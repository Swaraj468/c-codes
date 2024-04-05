#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;

    while (T--) {
        long long A, B, C;
        cin >> A >> B >> C;

        // If C is divisible by gcd(A, B), a solution exists
        if (C % gcd(A, B) == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}
