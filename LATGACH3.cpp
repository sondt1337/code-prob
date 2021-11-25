#include "bits/stdc++.h"

#define FOR(x, l, r) for (int x = l; x <= r; ++x)

using namespace std;

int n;
int A[50], B[50];

int main() {
    A[0] = 1;
    B[0] = 1;

    FOR(i, 2, 32) {
        A[i] = 2 * B[i - 2] + A[i - 2];
        B[i] = A[i] + B[i - 2];
    }

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << A[n] << '\n';
    }
}
