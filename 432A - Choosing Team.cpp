#include<iostream>
using namespace std;

int main()
{
    int n, k, i, c = 0, a;
    cin >> n >> k;
    k = 5 - k;
    for(i = 0;i < n; i++)
    {
        cin >> a;
        if(a <= k)
        {
            c++;
        }
    }
    int team = c / 3;
    cout << team << endl;

    return 0;
}
