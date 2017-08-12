#include <stdio.h>
int main()
{
 long long a;
    int count = 0;
    scanf("%lld", &a);
    while(a != 0)
    {
        a/= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
