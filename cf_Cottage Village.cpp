#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[3000],i,j,l,k,n;
    cin>>n>>k;
    l=2;
    for(i=0;i<n;i++){ cin>>a[3*i]>>a[3*i+2];if(i!=0){ j=-a[(i-1)*3]-a[(i-1)*3+2]/2 +a[(i-0)*3]-a[(i-0)*3+2]/2 ; a[(i-1)*3+1]=j;

    if(j>=k){ l++; if(j>k){l++;}  }  } }
    cout<<l<<"\n";
    return 0;
}
