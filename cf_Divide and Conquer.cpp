#include<bits/stdc++.h>

using namespace std;
int nn(int n){
  int i,j,k,t;
  if(n==0){return -1;}
  t=0;
  k=n%2;
  //cout<<k<<" "<<n<<" ";
  while(n%2==k){ t++;n=n/2;  }
  return t;

}
int main()
{
    int a[100],b[100],i,j,k,l,m,n,t;

    cin>>t;

    while(t--)
    {
        cin>>n;
        k=0;
        m=1000;
        for(i=0;i<n;i++){cin>>a[i];k+=a[i]; b[i]=nn(a[i]); //cout<<b[i]<<" <<<=b ";
        if(m>b[i]&&b[i]!=-1){m=b[i];}}

        if(k%2==0){cout<<0<<"\n";}
        else{
            cout<<m<<"\n";

        }
    }
    return 0;
}
