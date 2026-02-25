#include<bits/stdc++.h>
#define int long long
using namespace std;
int bb(int n,int a[],int o){

  int i,j,k,l,m;
  m=n;
  k=0;
  l=0;
  for(i=0;i<o;i++){a[i]=0;}
  while(m>0){
    a[k]=m%2;
    l=l+a[k];
    m=m/2;
    k++;

  }

   return l;

}
int pp(int n)
{

    int m,i,k;
    k=1;
    while(n>0){ k=k*2; n--; }
    return k;

}
int32_t main()
{
    int m,n,i,j,k,l,o,p,q,u,v,a[100],b[1000],t,z,c;
    cin>>t;
    o=65;
    while(t--)
    {

        cin>>m>>n;
        k=m/n;
        z=k;
        if(k*n==m){ k=0;  }
        else if(k==0){ k=m; z++; }
        else{ k=n*k-m;
               k=k+n; z++;}


       // cout<<k<<" diff \n";
        q=bb(k,b,o);
       // cout<<m<<" "<<n<<"\n";
        bb(n,a,o);
        v=0;
      //  cout<<q<<"  = q \n";
     // for(i=0;i<o;i++){ cout<<b[i]<<" "; } cout<<"\n";
      // for(i=0;i<o;i++){ cout<<a[i]<<" "; } cout<<"\n";
        while( true ){
        l=p=-1;
        for(i=o-1;i>=0;i--){ if(b[i]==1){ l=i; break; } }

         for(i=l;i>=0;i--){ if(a[i]==1){ p=i; break; } }
         //cout<<l<<" "<<p<<"\n";
         if(l!=-1&&p!=-1){
         u=0;
         for(k=p;k>=0;k--){  if( a[p-k]==1&&b[l-k]==1 ){ b[l-k]=0; u++; }  }
         q=q-u;
         v=v+(pp(l-p));
         }
        //    cout<<q<<"  "<<v<<"  = q,,vv \n";
      //for(i=0;i<o;i++){ cout<<b[i]<<" "; } cout<<"\n";
      // for(i=0;i<o;i++){ cout<<a[i]<<" "; } cout<<"\n";
          if(l==-1||p==-1||q<=0){
          if(q<=0){  q=1; }else{q=0; }
          break;
          }
        }

       // cout<<v<<" v \n ============================== ";
       if(q==1){

          cout<<max(v,z)<<"\n";
       }
       else{
         cout<<-1<<"\n";

       }
    }

    return 0;
}

