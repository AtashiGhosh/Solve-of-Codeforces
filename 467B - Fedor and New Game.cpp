#include <iostream>
using namespace std;

int main()
{
    int a[1002];
    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 0; i < m + 1; i++)
        cin >> a[i];

    int ans = 0;

    for (int i = 0; i < m; i++)
    {
        int t = 0;
        for (int j = 0; j < n; j++)
            if (((a[i] >> j) & 1) != ((a[m] >> j) & 1))
                t++;
        if(t <= k)
           ans++;
    }

    cout << ans << endl;
    return 0;
}
