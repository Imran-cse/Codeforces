#include<iostream>
using namespace std;

int main()
{
    int n,c,a,b,count=0;
    cin>>n>>c;
    int num[n],i;
    for(i=0 ; i<n; i++)
    {
        cin>>num[i];
    }
    for(i=0; i<n-1; i++)
    {
        if((num[i+1]-num[i]) > c)
        {
            count = 0;
        }
        else
        {
            count++;
        }
    }
    count++;
    cout<<count<<endl;
}
