#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,v,u,t,a[200];

    string s;

    cin>>t;

    while(t--)
    {

        cin>>n>>k>>m;

        cin>>s;

        l=0;
        j=0;
        v=0;

        for(i=0;i<n;i++){

            if(s[i]==s[v]){j++;}
            else{  a[l]=j; l++; j=1; v=i; }

            if(i==n-1){   a[l]=j; l++; j=1; v=i;  }

        }

        if(m>=0){ cout<<n*k+m*n<<"\n"; }
        else{

            v=0;
            if(l%2==0){ v++; }
            v+=(l+1)/2;
            cout<<n*k+m*v<<"\n";

        }

    }


    return 0;
}
