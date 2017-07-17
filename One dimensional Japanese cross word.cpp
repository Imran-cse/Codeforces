#include<iostream>
using namespace std;

int main()
{
    int n,i,h,group[100],count=0,j=0,b=0;
    cin>>n;
    char a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]=='B')
        {
            while(a[i]=='B')
            {
                b++;
                i++;
            }
        }
        if(b>0)
        {
            group[j++] = b;
            b=0;
        }
    }
    cout<<j<<endl;
    for(i=0; i<j; i++)
        cout<<group[i]<<" ";

}
