#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {

        cin>>n;

        if(n%4==2){ cout<<n/4 +1 <<"\n"; }
        else{ cout<<n/4 <<"\n"; }
    }

    return 0;
}
