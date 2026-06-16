#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[2][2],i,j,k,l,m,n,t;

    cin>>t;

    while(t--)
    {
        k=0;
        for(i=0;i<2;i++){
            for(j=0;j<2;j++){ cin>>a[i][j]; k=k+a[i][j]; }

        }
        m=0;
        m=a[0][0]+a[0][1];

/*
       if(k==4){ cout<<2<<"\n"; }
 else if(k==1){cout<<1<<"\n";}
 else if(k==2&&m==2){ cout<<"1\n"; }
else if(k==2&&m==0){ cout<<"1\n";  }
else if(k==2&&m==1){cout<<"2\n";}
else if(k==3){ cout<<"1\n"; }
    }
*/

if(k==4){cout<<"2\n";}
else if(k==0){ cout<<"0\n"; }
else{  cout<<"1\n";  }

}

    return 0;
}
