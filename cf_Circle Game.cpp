#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,l,t,n,m;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){

            cin>>a[i];
        }

        if(n%2==1){cout<<"M\n";}
        else{
            l=1;
            for(i=0;i<n;i+=2){ if(a[i]<=a[i+1]){ l=0; break; } }
            if(l==0){ cout<<"Mike\n"; }
            else{  cout<<"Joe\n"; }
        }

    }

    return 0;
}
