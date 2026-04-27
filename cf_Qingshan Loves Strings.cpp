#include<bits/stdc++.h>
using namespace std;
int ol(string a, int n)
{
    int i,k,l;
    k=1;
    for(i=0;i<n-1;i++){ if(a[i]==a[i+1]){k=0; break;} }

    return k;
}
int main()
{
    int n,m,o,p,i,j,k,l,t,a[100],v,r,x,y;
    string q,w;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        cin>>q;
        cin>>w;


         k=q[0]-48;
         x=w[0]-48;
         l=p=o=0;
         for(i=0;i<n;i++){  if(q[i]==q[p]){m++;} else{ a[l]=m; m=1; p=i; l++; } if(i==n-1){ a[l]=m; l++; } }
         v=y=1;
         for(i=0;i<n;i+=2){ if(a[i]!=1){ v=0; break; } }
         for(i=1;i<n;i+=2){ if(a[i]!=1){ y=0; break; } }
         if(ol(q,n)==1){ cout<<"YES\n"; }
         else{

              if(v==0&&y==1){ if(x!=k&&ol(w,m)==1&&m%2==1){ cout<<"YES\n";  }else{ cout<<"NO\n"; }  }
              else if(v==1&&y==0){if(x==k&&ol(w,m)==1&&m%2==1){ cout<<"YES\n";  }else{ cout<<"NO\n"; }  }
              else{ cout<<"NO\n"; }


         }

    }
    return 0;
}
