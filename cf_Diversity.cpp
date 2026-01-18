#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    string d;

    cin>>d;
    cin>>a;
     set<char>s(d.begin(),d.end());
    if(a>d.size()){ cout<<"impossible\n"; }
    else if(b=a-s.size(),b<0){cout<<"0\n";}
    else{ cout<<b<<"\n"; }

    return 0;
}
