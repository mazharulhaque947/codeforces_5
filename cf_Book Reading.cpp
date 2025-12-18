// Book Reading

#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[100],i,j,n,t,m,k,l;
for(i=0;i<100;i++){  a[i]=0;  }
cin>>n>>t;
for(i=0;i<n;i++){cin>>a[i];}
//for(i=0;i<n;i++){cout<<a[i]<<" ";}
k=0;
while(t>0){

//cout<<t<<"ll\n";
t=t-(86400-a[k]);
k++;
//cout<<t<<"ll\n";
 }
cout<<k<<"\n";
return 0;
}
