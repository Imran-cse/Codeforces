#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j,k;
    cin>>n>>m;
    int x[n],y[n],res[m];
    for(i=1; i<=m; i++)
    {
        cin>>x[i]>>y[i];
    }
    int l = 1,count,a=1;
    int b=m;
    while(m>0)
    {
        count=0;
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                if(x[l] != i && y[l] != j)
                {
                    count++;-
                }
            }
        }
        res[a] = count;
        a++;
        m--;
    }
    for(i=1; i<=b; i++)
    {
        cout<<res[i]<<endl;
    }
}
