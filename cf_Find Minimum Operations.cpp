#include<bits/stdc++.h>
using namespace std;

int bb(int a[],int n,int k)
{
    int i,j,l,m,o;
    l=0;
    while(n>0){

        a[l]=n%k;
        n=n/k;
        l++;
    }

    return l;
}

int main()
{

    int a[100],i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
      cin>>n>>k;
      if(n==0){cout<<1<<"\n";}
      else if(k==1){ cout<<n<<"\n"; }
      else{ l= bb(a,n,k); m=0; for(i=0;i<l;i++){m=a[i]+m;}  cout<<m<<"\n";}

    }

    return 0;
}
