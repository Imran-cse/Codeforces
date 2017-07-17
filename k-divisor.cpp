#include<iostream>
using namespace std;

main()
{
    int n,k,i,j=0,count=0;
    cin>>n>>k;
    for(i=1; i<=n/2; i++)
    {
        if(n%i == 0)
        {
            count++;
            if(count==k)
            {
                j=i;
                break;
            }
        }
        if(i==n/2 && count==k-1)
        {
            j=n;
            break;
        }
        if(i==n/2 && count<=k-2)
            break;
    }
    if(j>0)
        cout<<j;
    else
        cout<<-1;
}
