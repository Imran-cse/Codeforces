#include<stdio.h>

int main()
{
    int t,h,m;
    char a[1];
    scanf("%d%d%c%d",&t,&h,&a[0],&m);

    if(t==12)
    {
        if(h>12)
        {
            h=h%10;
            printf("0%d",h);
        }
        else
            printf("%d",h);
        printf("%c",a[0]);
        if(m>59)
        {
            m=m%10;
            printf("0%d",m);
        }
        else
            printf("%d",m);
    }
    else
    {
        if(h>23)
        {
            h=h%10;
            printf("0%d",h);
        }
        else
            printf("%d",h);
        printf("%c",a[0]);
        if(m>59)
        {
            m=m%10;
            printf("0%d",m);
        }
        else
            printf("%d",m);
    }
}
