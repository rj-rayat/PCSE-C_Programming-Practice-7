#include <stdio.h>

int arr(int a[], int n)
{
    for (int i = 0; i< n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    arr(a, n);
}