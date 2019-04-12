#include<iostream>
using namespace std;

int main()
{
    int n, m, min, moves;
    cin >> n >> m;

    min = (n + 1) / 2;
    moves = (min + m -1) / m * m;
    if(moves > n)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << moves << endl;
    }
    return 0;
}
