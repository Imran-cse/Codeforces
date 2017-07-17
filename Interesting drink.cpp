#include<iostream>
using namespace std;

int main()
{
    int n,q,m,count,i,x;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cin>>m;
    while(m>0)
    {
        count=0;
        cin>>x;
        for(i=0; i<n; i++)
        {
            if((x/a[i])>0)
                count++;
        }
        cout<<count<<endl;
        m--;
    }
}
