#include<bits/stdc++.h>
using namespace std;
void m(int a[],int n, int i,int l){

   if(a[i]>a[l]){l=i;}
   cout<<a[l]<<" ";

   if(i+1<n){ m(a,n,i+1,l); }

}

int main()
{
    int n,i,a[100];
    cin>>n;
    for(i=0;i<n;i++){cin>>a[i];}
    m(a,n,0,0);
    return 0;
}
