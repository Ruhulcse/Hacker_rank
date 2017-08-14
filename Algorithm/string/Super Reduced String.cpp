#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int l=a.length();
    for(int i=0;i<l-1;i++)
    {
        if(a[i]==a[i+1])
        {
            a.erase(i,2);
             i=-1;
        }
    }
    if(a.length()==0)
        cout<<"Empty String"<<endl;
    else
        cout<<a<<endl;
    return 0;
}

