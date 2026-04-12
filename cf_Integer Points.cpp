#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100000],b[100000],i,j,k,l,m,n,o,p,t;

    cin>>t;
    while(t--)
    {

        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i]; }
        sort(a,a+n);
        k=0;

        cin>>m;

        for(i=0;i<m;i++){  cin>>b[i];  for(j=0;j<n;j++){  if((a[j]+b[i])%2==0&& (b[i]-a[j])%2==0 ){k++;} } }
        cout<<k<<"\n";
    }


    return 0;
}
