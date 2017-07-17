#include<iostream>
using namespace std;

int main()
{
    int n,i,j,count_r=0,res=0,count_c=0,er,ec,im=0;
    cin>>n;
    int a[n][n];
    int sumr[n],sumc[n];

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>a[i][j];
            if(a[i][j]==0)
            {
                er = i;
                ec = j;
            }
        }
    }
    if(n>1)
    {
        for(i=0; i<n; i++)
        {
            sumr[i] = 0;
            if(i==er)
                continue;
            else
            {
                for(j=0; j<n; j++)
                {
                    sumr[i] += a[i][j];
                    sumc[i] += a[j][i;]
                }
            }
        }
        if(sum[er]>sum[ec])
        {
            im = 1;
        }
        for(i=0; i<n; i++)
        {
            if(sumr[i] == sum[i+1])
            {
                count_r++;
            }
            if(sumc[i] == sum[i+1])
            {
                count_c++;
            }
        }
        if(n-countr==2 && n-count_c==2)
        {

            if(res<0)
                res *= -1;
            cout<<res<<endl;
        }
        else
            cout<<-1<<endl;
    }
    else
        cout<<a[0][0]<<endl;
}
