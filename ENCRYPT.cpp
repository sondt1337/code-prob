#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    long long tong=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i] <='9')
        {tong+=s[i]-48;
            s.erase(i,1);
            i--;
        }
    }
    cout<<s<<tong;
}
