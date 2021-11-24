#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int dem = 0;
    int count = 0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 32 && s[i + 1] == 32) {
            s.erase(i, 1);
            i--;
        }
        if (s[0] == 32) {
            s.erase(0, 1);
        }
        if (s[s.size() - 1] == 32) {
            s.erase(s.size() - 1, 1);
        }
    }
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 32) {
            dem++;
        }
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z') {
            count++;
        }
    }
    if (count != 0) {
        cout << dem + 1;
    }
    if (count == 0) {
        cout << 0;
    }
}
