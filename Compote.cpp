#include<iostream>
using namespace std;

int main()
{
    int a,b,c,i,j,rem,res=0;
    cin>>a>>b>>c;

    while(a>=1 && b>=2 && c>=4)
    {
        a = a-1;
        b = b-2;
        c = c-4;
        res += 7;
    }
    cout<<res<<endl;
}
