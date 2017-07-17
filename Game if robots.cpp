#include<iostream>
using namespace std;

int main()
{
    int n,k,i,j,l,count=0;

    cin>>n>>k;
    long long int a[n],b[100];
    for(l=1; l<=n; l++)
    {
        cin>>a[l];
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(j>n)
                j=j%n;
            b[++count] = a[j];
            if(count==k)
                break;
            //else
             //   count++;
        }
    }
    cout<<count<<endl;
    for(i=1; i<=count; i++)
    {
        cout<<b[i]<<" ";
    }
}
