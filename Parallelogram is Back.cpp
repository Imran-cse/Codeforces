#include<iostream>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3,a1,a2,a3,b1,b2,b3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    a1 = x1-x2+x3;
    b1 = y1-y2+y3;

    a2 = -x1+x2+x3;
    b2 = -y1+y2+y3;

    a3 = x1+x2-x3;
    b3 = y1+y2-y3;

    cout<<3<<endl<<a1<<" "<<b1<<endl<<a2<<" "<<b2<<endl<<a3<<" "<<b3;
}
