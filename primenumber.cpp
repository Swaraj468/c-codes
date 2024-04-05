#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long T;
    cin >> T;

    while (T--) {
        long long N;
        cin >> N;

        if (isPrime(N)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
