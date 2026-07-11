#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,k,t,u;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y>>k;
        u=min( (n+y-x)%n ,(n+x-y)%n );
        if(n>=2){u+=k;}
        cout<<u<<"\n";


    }

    return 0;
}
