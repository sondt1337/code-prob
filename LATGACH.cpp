#include <bits/stdc++.h>
using namespace std;
#define tmax 11
long long t, f[100], a[tmax];

int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> a[i];
    }
    for (int i = 1; i <= t; i++) {
        f[1] = 1;
        f[2] = 2;
        for (int j = 3; j <= a[i]; j++) {
            f[j] = f[j - 1] + f[j - 2];
        }
        cout << f[a[i]] << endl;
    }
}
