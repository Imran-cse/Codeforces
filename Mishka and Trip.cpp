#include<iostream>
using namespace std;

int main()
{
    int n,k,i,j,l;
    cin>>n>>k;
    int a[n],b[k],sum=0;
    for(i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    for(i=1; i<=k; i++)
    {
        cin>>b[i];
    }
    int e[n],f=0;
    for(i=1; i<=n; i++)
    {
        if(i==n)
        {
            sum += a[i]*a[1];
            e[f++] = i;
        }
        else
        {
            sum += a[i]*a[i+1];
            e[f++] = i;
        }

    }
    cout<<sum<<endl;
    int res=0;
    for(j=1; j<=k; j++)
    {
        for(l=1; l<=n; l++)
        {
            if(b[j]!= l && l!=b[j]-1 && l!=b[j]+1 && !(b[j]==n && l==1) && !(b[j]==1 && l==n))
            {

                int d = b[j];
                res += a[l]*a[d];

            }
        }
    }

    cout<<res<<endl;
}
