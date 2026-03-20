#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j,i,k,l,m,n;
    string q;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>q;
        k=l=0;
        for(i=0;i<n-1;i++){ if(q[i]=='0'&&q[i+1]=='0'){k++;}else if(q[i]!=q[i+1]){l++;} }

        if(k+l>0){cout<<"YES\n";}
        else{ cout<<"NO\n"; }

    }

    return 0;
}

