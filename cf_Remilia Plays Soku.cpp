#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y,k,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>x>>y>>k;

        cout<<k+min( (n+y-x)%n ,(n+x-y)%n )<<"\n";


    }

    return 0;
}
