#include<iostream>
using namespace std;

int main()
{
    int k,r,i,j,count=0,cost=0;
    cin>>k>>r;
    while(1)
    {
        cost += k;
        count++;
        if(cost%10==0 || cost%10==r)
            break;
    }
    cout<<count;
}
