#include<bits/stdc++.h>


using namespace std;

int main()
{
    char a[101],s;
    int i,j,k,m,n,v,u;

    cin>>n;

    cin>>a;
    v=u=0;
    s='a';
    for(i=0;i<n;i++){

        v=a[i]-s;
        if(v<0){ v=v*-1; }
        if(26-v<v){v=26-v;}
        s=a[i];
        u=u+v;

    }
    cout<<u<<"\n";
    return 0;
}
