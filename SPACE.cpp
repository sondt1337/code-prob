#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a[10000];

    for(int i=1;i<=n+1;i++)
    {
        getline(cin, a[i]);
    }
    for(int i=2;i<=n+1;i++)
    {
        int dem = 0;
        for(int j=0;j<a[i].size();j++)
        {
            if(a[i][j] == 32&& a[i][j+1] == 32)
            {
                a[i].erase(j,1);
                j--;
            }
        }
        for(int j =0 ;j<a[i].size();j++)
        {
            if(a[i][j] == 32)
            {
                dem ++;
            }
        }
        cout<<dem<<endl;
    }

}
