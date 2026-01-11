#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,t,u,v;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a;
       // if(n<=2&&a[0]==a[n-1]){cout<<"NO\n";}
        //else{cout<<"YES\n"; }
        v=0;
       /* for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){if(a[i]!=a[j]){v=1;break;}}

        } */
         if(a[0]==a[n-1]){cout<<"NO\n";}
        else{cout<<"YES\n"; }
    }

    return 0;
}
