#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a[8];

    int t,k,l,m,n,j,i;
    cin>>t;

    while(t--){
        m=n=0;
        for(i=0;i<8;i++){ cin>>a[i];}
        for(i=1;i<7;i++){
         if(count(a[i].begin(),a[i].end(),'#')==1){
                m=i+1; for(j=1;j<7;j++){if(a[i][j]=='#'){ n=j+1; }  }

                break;

                }
        }
       cout<<m<<" "<<n<<"\n";
    }

    return 0;
}
