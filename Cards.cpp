#include<iostream>
using namespace std;

int main()
{
    int n,p,i,total=0;
    cin>>n;
    p = n/2;
    int a[n],res[n],k=0,j;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
        total += a[i];
    }
    int d = total/p;
    for(i=1; i<n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(a[i]+a[j]==d)
            {
                res[++k] = i;
                res[++k] = j;
                a[i] = 0;
                a[j] = 0;
                break;
            }
        }
    }
    for(j=1; j<=n; j++)
    {
        cout<<res[j]<<" ";
        j++;
        cout<<res[j]<<endl;
    }
}
