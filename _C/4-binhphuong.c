#include <stdio.h>
#include <math.h>

int main()
{
  int t;
  scanf("%d", &t);
  long long n;
  while (t--)
  {
    scanf("%d", &n);
    printf("%lld\n", n * n);
  }
  return 0;
}

// 70221