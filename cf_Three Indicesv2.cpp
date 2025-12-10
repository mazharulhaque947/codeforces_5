#include<bits/stdc++.h>

using namespace std;
int pos(int a[],int n,int k){

int i,j;
for(i=0;i<n;i++){ if(a[i]==k){ break;  } }

return i+1;
}
int main()
{
    int a[1000],b[1000],c[1000],j,i,k,l,m,n,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        k=0;
        for(i=0;i<n;i++){ cin>>a[i]; if(i>0){ if(a[i-1]<a[k]){ k=i-1; } b[i]=a[k]; }  }
        k=n-1;
        for(i=n-1;i>=0;i--){ if(i<n-1){     if(a[i+1]<a[k]){ k=i+1; }  c[i]=a[k];     }  }
         // for(i=0;i<n;i++){ cout<<b[i]<<" ";} cout<<"\n";

       // for(i=0;i<n;i++){ cout<<c[i]<<" ";}


        j=1;
        for(i=1;i<n-1;i++){  if(b[i]<a[i]&&a[i]>c[i]){  k=pos(a,n,b[i]);l=i+1; m=pos(a,n,c[i]); j=0;break;  }  }
        if(j==1){ cout<<"NO\n"; }
        else{
            cout<<"YES\n";
            cout<<k<<" "<<l<<" "<<m<<"\n";

        }
    }

    return 0;
}
