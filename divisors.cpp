#include <bits/stdc++.h>
using namespace std;
long long countDivisors(long long n) {
    long long divisors = 0;
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            // If divisors are equal, count only one
            if (n / i == i) {
                divisors++;
            }
            // Otherwise, count both divisors
            else {
                divisors += 2;
            }
        }
    }
    return divisors;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int numDivisors = countDivisors(N);
        cout << numDivisors << endl;
    }
    return 0;
}
