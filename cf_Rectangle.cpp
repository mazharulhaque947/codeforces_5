#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[8],b,c,d,g,h,i,j,n;

    d=g=0;
    c=b=1;
    for(i=0;i<8;i++){cin>>a[i]; if(i%2==0){ if(a[i]>a[d]){d=i;} if(a[i]<a[g]){g=i;}}
               else{if(a[i]>a[b]){b=i;} if(a[i]<a[c]){c=i;} } }

    cin>>n;

     for(i=0;i<n;i++){  cin>>h>>j;  if( h<=a[d]&&h>=a[g] &&j>=a[c]&&j<=a[b] ){cout<<"YES\n"; }
    else{ cout<<"NO\n"; }
     }
    return 0;
}


