#include<bits/stdc++.h>

using namespace std;

int main()
{
    v[10]="6789TJQKA";
    char a,b[3],c[3];
    int u,i,j,k,l,o,p,n;

    cin>>a;
    cin>>b;
    cin>>c;
    u=k=0;

    for(i=0;i<9;i++){if(b[0]==v[i]){u=i; break;}  }
    for(i=0;i<9;i++){if(c[0]==v[i]){k=i; break;}  }
    if(b[1]==c[1]){

        if(u>k){cout<<"YES\n";}
        else{ cout<<"NO\n"; }

    }
    else if(b[1]==a&&c[1]!=a){  cout<<"YES\n"; }
    else{

        cout<<"NO\n";

    }

    return 0;
}
