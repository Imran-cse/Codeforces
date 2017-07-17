#include<iostream>
using namespace std;

int main()
{
    int n,res;
    cin>>n;
    if(n%3 == 0)
    {
        res = (n/3)*2;
    }
    else
        res = ((n/3)*2) + 1;
    cout<<res<<endl;
}
