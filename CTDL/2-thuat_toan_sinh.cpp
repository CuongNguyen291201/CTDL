#include <bits/stdc++.h>
using namespace std;

int n, a[1000];

void printT()
{
  int l = 1, r = n;
  while (l < r)
  {
    if (a[l] != a[r])
      return;
    l++;
    r--;
  }
  for (int i = 1; i <= n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}

void printAB()
{
  for (int i = 1; i <= n; i++)
  {
    if (a[i] == 0)
      cout << "A";
    else
      cout << "B";
  }
  cout << " ";
}

void Try(int i)
{
  for (int j = 0; j <= 1; j++)
  {
    a[i] = j;
    // if (i == n) printT();
    if (i == n)
      printAB();
    else
      Try(i + 1);
  }
}

int main()
{
  // cin >> n;
  // Try(1);
  int t;
  cin >> t;
  while (t--)
  {
    cin >> n;
    Try(1);
    cout << endl;
  }
  return 0;
}