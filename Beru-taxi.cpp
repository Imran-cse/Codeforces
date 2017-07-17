#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int a,b,n,x,y,v;
    cin>>a>>b>>n;
    double res[n],r;
    int i = 0;
    while(n>0)
    {
        cin>>x>>y>>v;
        r = pow((pow((a-x),2))+(pow((b-y),2)),0.5);
        res[i] = r/v;
        if(i>0)
        {
            if(res[0]>res[i])
                res[0] = res[i];
        }
        i++;
        n--;
    }
    cout<<setprecision(20)<<fixed<<res[0]<<endl;
}
