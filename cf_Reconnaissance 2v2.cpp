#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],s,i,j,n,k;

    cin>>n;
    for(i=0;i<n;i++){ cin>>a[i]; }
    s=a[0]-a[1];
    k=0;
    if(s<0){s=s*-1;}
    for(i=1;i<n;i++){

         j=a[0+i]-a[(1+i)%n];

    if(j<0){j=j*-1;}
    if(j<s){s=j;k=i; }

    }
    j=(k+1)%n;
    if(1){j++;}
    cout<<k+1<<" "<<j<<"\n";
    return 0;
}
