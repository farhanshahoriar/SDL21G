#include <stdio.h>

int main()
{
    int a,b,r;
    freopen("test.txt","r",stdin);
    scanf("%d %d" ,&a,&b);
    r = a+b;
    printf("%d\n",r);
    return 0;
}

