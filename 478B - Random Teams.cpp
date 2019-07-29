#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,max,min,x;
    cin>>n>>m;
    max=(n-m+1)*(n-m)/2;
    if(n%m==0){
        x=n/m;
        min=((x*(x-1))/2)*m;
    }
    else{
        x=(n/m);
        min=((x*(x-1))/2)*(m-(n%m));
        min+=(((x+1)*x)/2)*(n%m);
    }
    cout<<min<<" "<<max<<endl;
    return 0;
}
