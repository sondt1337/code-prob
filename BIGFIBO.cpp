/*  _________             ________                        __                 
 /   _____/ ____   ____ \______ \   ____   ____ _______/  |________ ___.__.
 \_____  \ /  _ \ /    \ |    |  \_/ __ \_/ __ \\____ \   __\_  __ <   |  |
 /        (  <_> )   |  \|    `   \  ___/\  ___/|  |_> >  |  |  | \/\___  |
/_______  /\____/|___|  /_______  /\___  >\___  >   __/|__|  |__|   / ____|
        \/            \/        \/     \/     \/|__|                \/     
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define modulo 1000000007ll
struct mat2x2 {
    ll a11, a12, a21, a22;
};
struct mat1x2 {
    ll a11, a12;
};
mat2x2 operator*(mat2x2 A, mat2x2 B) {
    mat2x2 res;
    res.a11 = (A.a11 * B.a11 + A.a12 * B.a21) % modulo;
    res.a21 = (A.a21 * B.a11 + A.a22 * B.a21) % modulo;
    res.a12 = (A.a11 * B.a12 + A.a12 * B.a22) % modulo;
    res.a22 = (A.a21 * B.a12 + A.a22 * B.a22) % modulo;
    return res;
}
mat2x2 operator^(mat2x2 A, ll n) {
    if (n == 1)
        return A;
    mat2x2 tmp = A ^ (n / 2);
    if (n & 1)
        return (tmp * tmp) * A;
    return tmp * tmp;
}
mat1x2 operator*(mat1x2 A, mat2x2 B) {
    mat1x2 res;
    res.a11 = (A.a11 * B.a11 + A.a12 * B.a21) % modulo;
    res.a12 = (A.a11 * B.a12 + A.a12 * B.a22) % modulo;
    return res;
}
int main() {
    ll n;
    cin >> n;
    mat2x2 A = { 0, 1, 1, 1 };
    mat1x2 F = { 1, 1 };
    F = F * (A ^ (n - 1));
    cout << F.a12;
}