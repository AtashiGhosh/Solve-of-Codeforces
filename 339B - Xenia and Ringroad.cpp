#include<iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> n >> m;

    int loc = 1;
    long long int time = 0;
    for(int i=0; i < m; i++)
    {
        int input;
        cin >> input;

        if(input >= loc)
        {
            time += input - loc;
        }
        else
        {
            time += n - (loc - input);
        }
        loc = input;
    }
    cout << time << endl;
    return 0;
}
