#include<stdio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if(a>b && a>c)
printf("a is bigger");
elseif(b>a && b>c)
printf("b is bigger");
elseif(c>a && c>b)
printf("c is bigger");
return 0;
}
