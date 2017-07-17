#include<iostream>
using namespace std;

int main()
{
    int n,k,i,j,res=0,count=0;
    cin>>n;

    res = n/2;
    cout<<res<<endl;
    if(n%2==0)
    {
        for(i=0; i<res; i++)
        {
            cout<<2<<" ";
        }
    }
    else
    {
        for(i=0; i<res-1; i++)
            cout<<2<<" ";
        cout<<3;
    }

}
