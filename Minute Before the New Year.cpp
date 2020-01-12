#include<iostream>
using namespace std;
int main()
{
    int a,b,t,m;

    cin>>t;
    for(int i = 0; i < t; i++)
    {
        cin>>a>>b;
        m = (a*60) + b;
        m = 1440 - m;
        cout<<m<<endl;
    }

    return 0;
}
