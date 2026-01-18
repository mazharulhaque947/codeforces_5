#include<bits/stdc++.h>

using namespace std;

int main()
{
    int r[4],g,b,w,t,o,p,z,i;
    cin>>t;
    while(t--)
    {
        cin>>r[0]>>r[1]>>r[2]>>r[3];

        o=p=z=0;
        for(i=0;i<4;i++){ if(r[i]%2==1){o++;}else{p++;} if(r[i]==0&&i!=3){z++;}}

        if(p==4){cout<<"YES\n";}
        else if(z==1&&o==3){ cout<<"NO\n"; }
        else if(o==2){ cout<<"NO\n"; }
        else{ cout<<"YES\n"; }

    }
    return 0;
}
