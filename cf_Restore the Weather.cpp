#include<bits/stdc++.h>

using namespace std;
int bp(int a[],int n,int o){
int k,l,m,i,j;

l=0;
k=n-1;
while(l<=k){
  j=k-l;
  j=j/2;
  m=l+j;

  if(a[m]==o){ break; }
  else if(a[m]<o){ l=m+1; }
  else{ k=m-1; }


}

return m;
}
int main()
{
    int a[100],b[100],c[100],d[100],i,j,k,l,m,n,t,o,p;
    cin>>t;

    while(t--){
        cin>>n>>m;
        for(i=0;i<n;i++){cin>>a[i]; c[i]=0; d[i]=a[i];}
        for(i=0;i<n;i++){cin>>b[i];}
        sort(d,d+n);
        sort(b,b+n);

        for(i=0;i<n;i++){

            o=p=bp(d,n,a[i]);
            while(1){

                if( o>=0&& c[o]==0 && d[o]==a[i]){c[o]=1; cout<<b[o]<<" ";  break; }
                if(   p<n&&c[p]==0&&d[p]==a[i] ){  c[p]=1; cout<<b[p]<<" "; break; }
                o--;
                p++;
            }

        }

        cout<<"\n";
    }

    return 0;
}
