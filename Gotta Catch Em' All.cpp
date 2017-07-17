#include<iostream>
using namespace std;

main()
{
    string s;
    cin>>s;
    int i,count=0,count_B=0,count_a=0,count_b=0,count_l=0,count_s=0,count_u=0,count_r=0;
    int len = s.length();
    for(i=0; i<len; i++)
    {
        if(s[i] == 'B')
            count_B++;
        else if(s[i] == 'a')
            count_a++;
        else if(s[i] == 'b')
            count_b++;
        else if(s[i] == 'l')
            count_l++;
        else if(s[i] == 's')
            count_s++;
        else if(s[i] == 'u')
            count_u++;
        else if(s[i] == 'r')
            count_r++;
    }
    while(count_B>=1 && count_u>=2 && count_l>=1 && count_b>=1 && count_a>=2 && count_s>=1 && count_r>=1)
    {
        count++;
        count_B--;
        count_u -= 2;
        count_l--;
        count_b--;
        count_a -= 2;
        count_s--;
        count_r--;
    }
    cout<<count;
}
