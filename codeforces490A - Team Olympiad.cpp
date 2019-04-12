#include<iostream>
#include<queue>
using namespace std;

queue <int> a, b, c;

int main()
{
   int n, c1=0, c2=0, c3=0, i, q;
   cin >> n;
   for(i = 1;i <= n; i++)
   {
      cin >> q;
      if(q == 1)
      {
          c1++;
          a.push(i);
      }
      else if(q == 2)
      {
          c2 ++;
          b.push(i);
      }
      else
      {
          c3++;
          c.push(i);
      }
   }

   int no_of_team = min(c1, min(c2, c3));
   cout << no_of_team << endl;
   while(no_of_team --)
   {
       cout << a.front() <<" "<< b.front() <<" "<< c.front() <<endl;
       a.pop();
       b.pop();
       c.pop();
   }
   return 0;
}
