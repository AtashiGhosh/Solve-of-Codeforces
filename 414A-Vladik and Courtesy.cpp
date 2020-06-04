#include<iostream>
using namespace std;
int main()
{
    int a,b,x,y,vl,va;
   cin >> a >> b;
    x=1;
    y=2;
    vl=0;
    va=0;

    while(a>=0)
    {
        a=a-x;
        x=x+2;
        vl++;

    }
    while(b>=0)
    {
        b=b-y;
        y=y+2;
        va++;
    }
    if(vl<=va) {cout << "Vladik" << endl;}
    else {cout << "Valera" << endl;}
    return 0;

}
