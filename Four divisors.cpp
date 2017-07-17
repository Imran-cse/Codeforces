#include<iostream>

int main()
{
    long long int n,count=0,temp_count=0;
    std :: cin>>n;
    for(int i=1; i<=n; ++i)
    {
        for(int j=i; j>0; --j)
        {
            if(i%j==0)
            {
                ++temp_count;
            }
            if(temp_count>4)
                break;
        }

        if(temp_count==4)
        {
            count++;
        }
        temp_count=0;
    }
    std :: cout<<count;
}
