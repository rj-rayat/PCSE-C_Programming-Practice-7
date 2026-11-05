#include <stdio.h>

int reverse(int n)
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for (int i = n -1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }
}
int main()
{ 
  int n;
  scanf("%d", &n);

  reverse(n);
  return 0;
}