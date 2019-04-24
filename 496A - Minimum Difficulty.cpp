#include<bits/stdc++.h>
using namespace std;
vector<int> v;

int maxdifficulty(int n)
{
   int ans = v[1] - v[0];
   for(int i = 2;i < n; i++)
   {
       ans = max(ans, v[i] - v[i - 1]);
   }
   return ans;
}
int main()
{
    int n, a;
    cin >> n;
    for(int i = 0;i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    int x, result;
    for(int i = 1;i < n - 1; i++)
    {
        a = v[i];
        v.erase(v.begin() + i);
        x = maxdifficulty(n);
        result = min(result, x);
        v.insert(i + v.begin(), a);
    }
    cout << result;
    return 0;
}
