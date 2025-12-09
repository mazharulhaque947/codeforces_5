#include<bits/stdc++.h>

using namespace std;
int co(int a[],int n,int p){

int c,i,j;
c=0;
for(i=0;i<n;i++){ if(a[i]>a[p]){c++;}  }
return c;

}
int main()
{
int t,i,j,k,m,n,a[2000];

cin>>n;
for(i=0;i<n;i++){  cin>>a[i]; }

for(i=0;i<n;i++){  cout<<co(a,n,i)+1<<" "; }
cout<<"\n";




return 0;
}
