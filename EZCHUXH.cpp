#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	getline(cin,s);
	map<char,int>m;
	for(int i = 0;i<s.length();i++){
		if(isalpha(s[i]))
			m[s[i]] ++;
	}
	for(auto x:m){
		cout<<x.first<<":"<<x.second<<endl;
	}
}
