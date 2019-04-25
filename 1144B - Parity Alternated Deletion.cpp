#include<bits/stdc++.h>
using namespace std;
vector<int>odd, even;

int main()
{
    int n, a, sum=0;
    cin >> n;
    for(int i = 0;i < n; i++)
    {
        cin >> a;
        sum += a;
        if(a%2 == 1)
            odd.push_back(a);
        else
            even.push_back(a);
    }
    sort(odd.begin(), odd.end(),greater<int>());
    sort(even.begin(), even.end(), greater<int>());
    int k = min(odd.size(), even.size());
    int res = sum;
    res -= accumulate(odd.begin(), odd.begin() + k, 0);
	res -= accumulate(even.begin(), even.begin() + k, 0);

    if(int(odd.size()) > k)
        res -=odd[k];
    if(int(even.size()) > k)
        res -= even[k];
    cout << res << endl;

    return 0;
}
