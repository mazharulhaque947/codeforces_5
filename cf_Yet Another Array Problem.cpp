#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a[100],i,j,k,l,m,n,t,o;

    int p[16]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};


    cin>>t;

    while(t--)
    {

        cin>>n;
         o=1e7;
        for(i=0;i<n;i++){  cin>>a[i]; for(j=0;j<16;j++){  if(a[i]%p[j]==0){  } else{ if(p[j]<o){ o=p[j]; break;} } } }

          if(o==1e7){ cout<<"-1\n"; }
          else{  cout<<o<<"\n"; }
    }

    return 0;
}
