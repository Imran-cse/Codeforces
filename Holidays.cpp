#include<iostream>
using namespace std;

main()
{
    int year,res,min,max;
    cin>>year;
    if(year%7 == 6)
    {
        min = ((year/7)*2) + 1;
    }
    else
    {
        min = (year/7)*2;
    }

    if(year%7 ==0)
    {
        max = (year/7)*2;
    }
    else
    {
        if(year%7 == 1)
        {
            max = ((year/7)*2) + 1;
        }
        else
        {
            max = ((year/7)*2) + 2;
        }
    }
    cout<<min<<" "<<max<<endl;
}
