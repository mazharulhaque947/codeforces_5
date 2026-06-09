
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],t,i,j,k,l,m,o,c[20],d[5];
    d[0]=1;d[1]=2;d[2]=4;d[3]=8;d[4]=16;
    cin>>t;

    while(t--)
    {

        cin>>n;
        l=0;
        for(i=0;i<n;i++){ cin>>a[i]; if(i>0){  if(a[i]<a[i-1]){ c[l]=i+1; l++; } }  }

        k=1;

        for(i=0;i<l;i++){ o=0; for(j=0;j<5;j++){ if(d[j]==c[i]){ o=1; break; } }  if(o==0){k=0; break;}  }

        if(k==1){ cout<<"YES\n";}
        else{  cout<<"NO\n"; }
    }


    return 0;
}
