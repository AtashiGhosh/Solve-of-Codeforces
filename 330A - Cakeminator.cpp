#include<iostream>
#include<string>
using namespace std;

int main()
{
  int r, c, row[11] = {}, col[11] = {};
  string s;
  cin >> r >> c;
  for(int i = 0;i < r; i++)
  {
      cin >> s;
      for(int j = 0;j < c; j++)
      {
          if(s[j] == 'S')
          {
              row[i] = 1;
              col[j] = 1;
          }

      }

  }

  int n(0);
  for(int i = 0;i < r; i++)
  {
      for(int j = 0;j < c; j++)
      {
            if(row[i] == 0 || col[j] == 0)
          {
              n += 1;
          }
      }
  }
  cout <<  n <<endl;
  return 0;

}
