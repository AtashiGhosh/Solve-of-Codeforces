#include<iostream>
using namespace std;

int main()
{
    int n, c, i, a[105];
    cin >> n >> c;
    for(i = 1;i <= n; i++)
    {
        int max = 0;
        cin >> a[i];


    cout << max(a[i] - a[i - 1], i) << endl;
    }
    return 0;
}
