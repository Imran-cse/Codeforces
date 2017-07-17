#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j;
    bool d=false;
    cin>>n>>m;
    string a[n],b[m];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<m; i++)
    {
        cin>>b[i];
    }
    if(n>m)
        cout<<"YES";
    else if(n<m)
        cout<<"NO";
    else if(n==m)
    {
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(a[i] == b[j])
                {
                    d=true;
                    break;
                }
            }
        }
        if(d==false)
            cout<<"NO";
        else
            cout<<"YES";
    }
}
