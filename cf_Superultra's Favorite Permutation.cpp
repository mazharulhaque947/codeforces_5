#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,t;

    cin>>t;
    while(t--){

        cin>>n;
        if(n<5){ cout<<-1<<"\n"; }
        else{ for(i=1;i<=n;i+=2){if(i==5){ continue;}cout<<i<<" ";}   cout<<5<<" "<<4<<" ";for(i=2;i<=n;i+=2){if(i==4){ continue;}cout<<i<<" ";}  }

    }

    return 0;
}
