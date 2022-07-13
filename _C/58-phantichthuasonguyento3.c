#include <stdio.h>
#include <math.h>

int main()
{
  int t, test=1;
  scanf("%d", &t);
  while (t--)
  {
    long long n;
    scanf("%lld", &n);
    printf("Test %d: ", test);
    for (int i = 2; i <= n; i++)
    {
      int count = 0;
      if (n%i==0){
	      while (n % i == 0)
	      {
	        count++;
	        n /= i;
	      }
	      printf("%d(%d) ", i, count);
      	
	  }
    }
    test++;
    printf("\n");
  }
  return 0;
}