#include<stdio.h>

int main()
{
    int n,i,j=0,count=0,a[100];
    scanf("%d", &n);
    for(i=5; i<25;i++)
    {
        if(i/5==n)
        {
            count++;
            a[j] = i;
            j++;
            if(i%25==0)
                count++;
        }
    }
    printf("%d",count);

}
