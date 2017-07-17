#include<stdio.h>

int main()
{
    int a,b,c,i;
    scanf("%d%d%d", &a,&b,&c);

    if(a==c || b==c)
    {
        printf("Yes");
    }
    else
    {
        for(i=1; ; i++)
        {
            if(c-(a*i)==0 || c-(a*i)==b)
            {
                printf("Yes");
                break;
            }
            else if(c-(b*i)==a || c-(b*i)==0)
            {
                printf("Yes");
                break;
            }
            else if(i>c)
            {
                printf("No");
                break;
            }
        }
    }
}
