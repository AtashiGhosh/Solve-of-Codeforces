    #include<iostream>
    using namespace std;

    int main()
    {
        int n, d, i, t, time=0, no_of_jokes;
        cin >> n >> d;

        for(i = 0;i < n; i++)
        {
            cin >> t;
            time += t;
        }
        if(d < ((n-1) * 10 + time))
        {
            cout << "-1" << endl;
        }
        else
            {
                cout << (d - time) / 5 << endl;
            }

        return 0;
    }
