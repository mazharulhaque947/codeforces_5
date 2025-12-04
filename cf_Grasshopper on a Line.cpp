
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int m,n,t;
    cin>>t;
    while(t--)
    {

        cin>>n>>m;
        if(n%m==0){ cout<<"2\n"<<n-1<<" "<<1<<"\n"; }
        else{ cout<<"1\n"<<n<<"\n"; }

    }

    return 0;
}
