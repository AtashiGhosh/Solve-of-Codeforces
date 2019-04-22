#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n, k, a, b;
    cin >> n >> k;
    int joy = -2e9;
    for(int i = 0;i < n; i++)
    {
        cin >> a >> b;
        if(b > k)
        {
            joy = max(joy, a - (b - k));
        }
        else
            joy = max(joy, a);
    }
    if(joy == -2e9)
        cout << "-1" << endl;
    else
        cout << joy << endl;
    return 0;
}
