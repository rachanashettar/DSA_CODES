#include <stdio.h>
int fact(int n);
int main()
{
    int n, factorial;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    factorial = fact(n);
    printf("Factorial of %d is: %d\n", n, factorial);
    return 0;
}
int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = i*factorial;
    }
    return factorial;
}
