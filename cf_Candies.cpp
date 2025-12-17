// Candies

#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[100],i,j,k,l,n,m;
cin>>n>>m;
k=n/m;
l=n%m;
for(i=0;i<m;i++){a[i]=k;}
for(i=0;i<l;i++){a[i]=a[i]+1;}
for(i=m-1;i>=0;i--){ cout<<a[i]<<" ";   }
cout<<"\n";
return 0;
}
