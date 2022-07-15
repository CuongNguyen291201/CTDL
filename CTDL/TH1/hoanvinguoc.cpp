#include <bits/stdc++.h>
#include <string>
using namespace std;

int n, a[10000], check[10000], count;
vector<string> r;

void result(int k)
{
  for (int i = 1; i <= n; i++)
  {
    cout << a[i];
  }
  cout << " "<<endl;
}

int Try(int i, int count)
{
  for (int j = n; j >= 1; j--)
  {
    if (check[j] == 0)
    {
      check[j] = 1;
      a[i] = j;
      if (i == n)
        result(i);
      else
      {
        Try(i + 1, count++);
      }
      check[j] = 0;
    }
  }
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    cin >> n;
    Try(1, 0);
    cout << endl;
  }

  return 0;
}
