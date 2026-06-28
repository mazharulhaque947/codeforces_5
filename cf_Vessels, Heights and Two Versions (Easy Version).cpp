#include<bits/stdc++.h>
using namespace std;
int mix(int a,int b){ int c =a; if (b<a){c=b;} return c; }
int main()
{
    int a[300],l[300],r[300],s,i,j,k,m,n,t;
    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++){cin>>a[i];}

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++){l[j]=r[j]=0;}
            for(j=1;j<n;j++){r[(i+j)%n]=max(a[(i+j-1)%n],r[(i+j-1)%n]);}
            for(j=1;j<n;j++){l[(i-j+n)%n]=max(a[(i+n-j)%n],l[(i-j+n+1)%n]);}
            for(j=0;j<n;j++){cout<<r[j]<<" ";} cout<<"\n";
            for(j=0;j<n;j++){cout<<l[j]<<" ";} cout<<"\n";

            s=0;
            for(j=0;j<n;j++){ s+=mix(l[j],r[j]); }
            cout<<s<<"= ";
        }
         cout<<"\n";

    }
    return 0;
}
