#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    while(n--)
    {
    cin>>s;
    set<char>c;
    for(int i=0;i<s.size();i++)
    {
        c.insert(s[i]);
    }
    cout<<c.size()<<endl;
    }
    return 0;
}
