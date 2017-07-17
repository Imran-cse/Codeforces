#include<iostream>
using namespace std;
int n;
struct pole{
    string a;
    int b;
}dir[4];

int main()
{
    int n,k,i,count=0,res=0,res1=0;
    cin>>n>>k;
    for(i=1; i<=n && res1<240; i++)
    {
        res += 5*i;
        count++;
        res1 = res + k;
    }
    if(res1>240)
        count--;
    cout<<count;
}
