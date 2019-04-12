#include<iostream>
using namespace std;
int a[10000];
int b[10000];

void insertionSort(int a[], int n)
{
   int i, x, j,y;
   for (i = 1; i < n; i++)
   {
       x = a[i];
       y=b[i];
       j = i-1;

       while (j >= 0 && a[j] > x)
       {
           a[j+1] = a[j];

           b[j+1]=b[j];
            j = j-1;
       }
       a[j+1] = x;
       b[j+1]=y;
   }

}

int main()
{
    int s, n, i=0;
    cin >> s >> n;

    for(i = 0;i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    insertionSort(a,n);
    for(i = 0;i < n; i++)
    {
        if(s > a[i])
            {
                s += b[i];
            }
            else
            {
                cout << "NO" << endl;
              return 0;
            }
    }


    cout << "YES" << endl;
    return 0;
}
