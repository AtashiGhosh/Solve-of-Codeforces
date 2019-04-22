#include <iostream>
using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    int p[n], ans(0);

    for (int i = 0; i < n; i++)
      cin >> p[i];

    for (int i = 0; i < n - 1; i++)
        ans = max(ans, p[i] - p[i + 1] - c);

    cout << ans << endl;
    return 0;
}
