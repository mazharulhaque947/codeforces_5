
//Wonderful Sticks

#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,t,i,j,k,l,m,b[100];
string a;
cin>>t;
while(t--)
{
cin>>n;
cin>>a;
l=1;
k=n;
for(i=n-2;i>=0;i--){ if(a[i]=='>'){ b[i]=k;k--;  } else{ b[i]=l;l++; }}
cout<<k<<" " ; for(i=0;i<n-1;i++){ cout<<b[i]<<" ";  }
cout<<" \n";
}
return 0;
}
