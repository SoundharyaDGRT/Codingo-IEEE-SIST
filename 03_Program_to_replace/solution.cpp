#include <stdio.h>
#include <string.h>
#include <math.h>
long int replace(long int num)
{
    if (num == 0)
        return 0;
    int digit = num % 10;
    if (digit == 0)
        digit = 1;
    return replace(num / 10) * 10 + digit;
}
int Convert(long int num)
{
    if (num == 0)
        return 1;
    else
        return replace(num);
}
int main()
{
    long int n, c;
    scanf("%ld", &n);
    if (n == -1)
        printf("Invalid");
    else
    {
        c = Convert(n);
        printf("%ld", c);
    }
    return 0;
}
