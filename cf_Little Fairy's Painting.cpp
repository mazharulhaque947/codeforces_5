#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000],i,j,k,l,m,n,o,p,t,b[100];

    cin>>t;

    while(t--)
    {

        cin>>n;
        for(i=0;i<n;i++){ cin>>a[i]; }

        sort(a,a+n);
         l=0;
         p=0;
        for(i=0;i<n;i++){

            if(a[i]==a[p]){ }
            else{ b[l]=a[p]; p=i; l++; }
            if(i==n-1){  b[l]=a[p]; l++; }
        }
        o=0;
        //cout<<*upper_bound(b,b+l,l)<<"\n";
        //o=*upper_bound(b,b+l,l);
       if( binary_search(b,b+l,l) ==1){ o=l; } else{  o=*upper_bound(b,b+l,l);  }

         cout<<o<<"\n";
    }

    return 0;
}
