#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=1; i<=n; i++)
        cin>>a[i];
    if(n==1 && (a[n]!=15 && a[n]!=0))
        cout<<-1<<endl;
    else
    {
        if(a[n]==0)
            cout<<"UP"<<endl;
        else if((a[n]-a[n-1]>0) && (a[n]!=15))
            cout<<"UP"<<endl;
        else
            cout<<"DOWN"<<endl;
    }
}
