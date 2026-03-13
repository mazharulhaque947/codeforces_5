#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100][26],i,j,k,l,m,n,t,o,p,b[26];
    string q;
    cin>>t;
    while(t--)
    {
       cin>>n;
       cin>>q;
       for(i=0;i<26;i++){ a[0][i]=0; }
       a[0][q[0]-97]++;
       for(j=1;j<n;j++){  for(i=0;i<26;i++){ a[j][i]=a[j-1][i]; } a[j][q[j]-97]++; }

       p=0;

       for(j=0;j<n-1;j++){ o=0;k=l=0; for(i=0;i<26;i++){ if(a[j][i]>0){k++;} if(a[n-1][i]-a[j][i]>0){l++;} } if(p<k+l){p=l+k;}   }
       cout<<p<<"\n";
    }
    return 0;
}
