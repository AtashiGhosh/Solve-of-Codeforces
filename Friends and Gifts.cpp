#include<bits/stdc++.h>
using namespace std;
int k,n,a[200005],b[200005];
vector<int>d,g;
int main(){
	cin>>n;
	for(k=1;k<=n;k++){
		cin>>a[k];
		b[a[k]]=1;
		if(a[k]==0)
            d.push_back(k);
	}

	for(k=1;k<=n;k++){
		if(b[k]==0){
			g.push_back(k);
		}
	}

	for(k=0;k<d.size()-1;k++){
		if(g[k]==d[k] || g[k+1]==d[k+1]) {
			swap(g[k],g[k+1]);
		}
		a[d[k]]=g[k];
	}
	a[d[d.size()-1]]=g[g.size()-1];
	for(k=1;k<=n;k++)
	cout<<a[k]<<" ";
}
