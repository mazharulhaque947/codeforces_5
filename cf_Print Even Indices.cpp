#include<bits/stdc++.h>
using namespace std;

void s(int a[],int i,int n){

  if(i+2<n){ s(a,i+2,n); }
  cout<<a[i]<<" ";
}
int main()
{
    int a[100],i,n;
    cin>>n;
    for(i=0;i<n;i++){cin>>a[i];}
    s(a,0,n);
    return 0;
}
