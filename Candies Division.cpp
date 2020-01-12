#include<iostream>
using namespace std;
int main()
{
    int n,k,t;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int kandy = n/k * k + min(n%k, k/2);
        cout << kandy << endl;
    }
    return 0;
}
