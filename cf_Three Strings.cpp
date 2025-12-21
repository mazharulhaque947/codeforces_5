#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b,c;
    int i,j,k,l,m,t,n;

    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        n=a.length();
        m=1;
        for(i=0;i<n;i++){ if(a[i]!=c[i]&&b[i]!=c[i]){ m=0; break; } }
        if(m==1){cout<<"YES\n";}
        else{  cout<<"NO\n";  }


    }




    return 0;
}
