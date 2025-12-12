#include<bits/stdc++.h>
#define int long long
using namespace std;
int bs(int a[],int n,int p)
{

    int s=0;
    s=a[n-1]-a[n-p-1];
    return s;


}
int fs(int a[], int n, int p){
   int s;
   s=a[p-1];
   return s;

}
int32_t main()
{

   int a[100],b[100],i,j,k,l,m,n,t,o;

   cin>>t;
   while(t--){

       cin>>n;
       k=0;
       for(i=0;i<n;i++){ cin>>a[i];   }
       sort(a,a+n);
        for(i=0;i<n;i++){  k=k+a[i]; b[i]=k;   }
        o=n/2;
        o++;
        o=n-o;
        m=0;
        k=2;
        l=1;
        while(l<=o){

            if( fs(b,n,k)<bs(b,n,l) ){ m=1; break; }

            l++;
            k++;
        }

        if(m==1){ cout<<"YES\n"; }
        else{ cout<<"NO\n"; }
   }

   return 0;
}



