#include <iostream>
#include<vector>
using namespace std;
int a[110];
int main() {
    int n, p, v, k;
    vector<int>seller ;
    cin >> n >> v;

    for (int i = 1; i <= n; ++i) {
        cin >> k;
        bool flag = 0;
        for (int j = 0; j < k; ++j) {
            cin >> p;
            if (v > p)
                flag = 1;
        }
        if (flag)
            seller.push_back(i);
    }
    cout << seller.size() << endl;
    for (int i = 0; i < seller.size(); ++i) {
        cout << seller[i] << " ";
    }
    return 0;
}
