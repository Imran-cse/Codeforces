#include<iostream>
using namespace std;

int main()
{
    int n,k,i,j,d;
    cin>>n>>k;
    int a[n],b[n],sum_a=0,sum_b=0;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
        sum_a +=a[i];
    }
    b[0] = a[0];
    for(i=1; i<n; i++)
    {
        if(k-a[i-1] <= a[i])
        {
            if(a[i-1]+a[i] >= k)
                b[i] = a[i];
        }
        else
        {
            if(k-b[i-1] >= a[i])
                b[i] = k-b[i-1];
            else
                b[i] = a[i];
        }
    }
    for(i=0; i<n; i++)sum_b += b[i];
    cout<<sum_b-sum_a<<endl;
    for(i=0; i<n; i++)cout<<b[i]<<" ";
}
