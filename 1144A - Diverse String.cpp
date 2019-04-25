#include <bits/stdc++.h>
using namespace std;

int main()
{   int n,i,j;
    string str;

	for(cin>>n;n--;){
		cin>>str;
		sort(str.begin(),str.end());
		for(j=0,i=1;i<str.size();i++)j|=str[i]!=(str[i-1]+1);
		cout<<(j?"No\n":"Yes\n");
	}
	return 0;
}
