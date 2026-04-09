//Longest Good Array
#include<bits/stdc++.h>
using namespace std;
long long ss(int n){
long long s= (n*(n+1))/2;
return s;
}
int main()
{
int l,r,i,j,k,n,t;
cin>>t;
while(t--)
{
cin>>l>>r;
j=0;
while(ss(j+1)+l<=r) {  j++; }
cout<<j+1<<"\n";
}
return 0;
}
