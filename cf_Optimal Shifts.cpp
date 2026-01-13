#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,j,i,k,l,m,n,a[100],u;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        u=1;
        if(s[0]=='0'){u=0;}
        m=0;
        k=0;
        l=0;
        for(i=0;i<n;i++){
           if(s[i]!=s[k]){ k=i; a[l]=m; l++; m=1; }
           else{ m++;  }
           if(i==n-1){ a[l]=m; l++; }
        }
        m=0;
        if(l%2==0){ for(i=u;i<l;i+=2){ if(a[i]>m){m=a[i];} } }
        else{
            if(u==0){a[0]=a[0]+a[l-1];}
            l--;
            for(i=u;i<l;i+=2){ if(a[i]>m){m=a[i];} }
        }
        cout<<m<<"\n";
    }

    return 0;
}
