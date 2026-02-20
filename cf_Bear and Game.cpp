#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,m,n,t;
    cin>>n;
    m=0;

    for(i=0;i<n;i++){ cin>>a[i]; }
    for(i=0;i<n;i++){  if(a[i]-m>15){ break; }else{ m=a[i]; } }

    m=m+15;

    if(m>90){m=90;}
    cout<<m<<"\n";

    return 0;
}
