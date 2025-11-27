#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k,l,m,p,o,t,a[200];
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=-1;
        o=0;
        for(i=0;i<n;i++){cin>>a[i]; if(o==0&&a[i]==0){k=i;}else{o++;}   }

        if(k==n-1){ cout<<"0\n"; }
        else{
          o=0;
          l=n;
          for(i=n-1;i>=0;i--){ if(a[i]==0&&o==0){ l=i; } else{ o++; break;} }
            o=0;
            for(i=k+1;i<l;i++){ if(a[i]==0){ o=1; break; } }
            if(o==1){ cout<<"2\n"; }
            else{  cout<<"1\n"; }
        }

    }

    return 0;
}
