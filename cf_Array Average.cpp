#include<bits/stdc++.h>
using namespace std;

double aa(int a[],int n,int i){
  if(i==n-1){return (a[i]*1.0/n);}
  else{ return a[i]*1.0/n +aa(a,n,i+1); }
}
int main()
{
    int a[100],i,j,k,m,n;
    cin>>n;
    for(i=0;i<n;i++){cin>>a[i];}
    printf("%.6lf\n",aa(a,n,0));
    return 0;
}
