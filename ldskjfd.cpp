#include<bits/stdc++.h>
using namespace std;
#define sz(n) n.size()

int n,m,a,b;
string s1,s2,s;

map<string,int>mp;

///Current Code functions
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;++i)
    {
        cin>>s;
        mp[s]=1;
    }
    vector<string>v;
    for(int i=0;i<m;++i)
    {
        cin>>s;
        if(mp.count(s))
        {
            mp[s]=3;
            v.push_back(s);
        }
        else
            mp[s]=2;
    }
    int turn=0;
    int ss = sz(v);
    if(ss%2)
    {
        turn=1;
    }
    else
    {
        turn=0;
    }
//    for(int i=0;i<sz(v);++i)
//    {
//        mp[v[i]]=0;
//    }
    n -= ss;
    m -= ss;
    bool ans=false;
    if(turn)
    {
        if(n==m)
        {
            ans=true;
        }
        else if(n>m)
        {
            ans = true;
        }
        else
        {
            ans = false;
        }
    }
    else
    {
        if(n==m)
        {
            ans=false;
        }
        else if(n>m)
        {
            ans = true;
        }
        else
        {
            ans = false;
        }
    }
    if(ans)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
