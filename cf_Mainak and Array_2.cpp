
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,k,m,n,j,o,p,t;
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i]; }
        j=0;
        for(i=1;i<n;i++){  if(a[i]-a[0]>j){j=a[i]-a[0];} }
        for(i=0;i<n-1;i++){  if(a[n-1]-a[i]>j){j=a[n-1]-a[i];} }

        for(i=0;i<n-1;i++){  if(a[i+0]-a[i+1]>j){j=a[i]-a[i+1];} }
        cout<<j<<"\n";

    }


    return 0;
}
