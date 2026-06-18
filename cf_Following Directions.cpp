#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,i,j,k,l,t,m,n;

    string q;

    cin>>t;

    while(t--)
    {

        cin>>n;

        cin>>q;

        x=y=0;
        k=0;
        for(i=0;i<n;i++){if(q[i]=='U'){ y++; }else if(q[i]=='D'){y--;}else if(q[i]=='R'){x++;}else{x--;} if(x==1&&y==1){k=1; break;} }

        k?cout<<"YES\n":cout<<"NO\n";
    }


    return 0;
}
