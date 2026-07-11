
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],z,o,n,t,u,i,j,k;

    cin>>t;

    while(t--)

    {
        cin>>n;

        z=o=u=0;

        for(i=0;i<n;i++){ cin>>a[i]; if(a[i]==0){z++;}else if(a[i]==1){o++;}else{u++;} }
        k=min(u,o);
        j=k;
        if(k<o){  k=o-k; k=k/3;  k=k*1; }
        else if(k<u){ k=u-k; k=k/3; k=k*1; }
        else{k=0;}
        cout<<k+z+j<<"\n";

    }


    return 0;
}
