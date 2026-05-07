#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100][26],b[26],i,j,k,l,t,o,m,n,u,v;
    string q,w;
    cin>>t;
    while(t--)
    {    o=26;
        cin>>q;
        cin>>w;
        for(i=0;i<o;i++){ a[0][i]=0; b[i]=0; }
        n=q.size();
        m=w.size();
        for(i=0;i<n;i++){b[q[i]-97]++;}
        a[0][w[0]-97]++;
        for(i=1;i<m;i++){ for(j=0;j<o;j++){a[i][j]=a[i-1][j];} a[i][w[i]-97]++; }

        k=0;

        for(i=0;i<m-n+1;i++){
                l=1; for(j=0;j<o;j++){ u=a[i+n-1][j]; if(i>0){u=u-a[i-1][j];} if(u!=b[j]){l=0; break;} }
                if(l==1){k=l; break;}
            }
        if(k==1){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
    return 0;
}
