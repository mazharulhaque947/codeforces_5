#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a[8];

    int t,k,l,m,n,j,i;
    cin>>t;

    while(t--){
        m=n=0;
        for(i=0;i<8;i++){ cin>>a[i]; if(count(a[i].begin(),a[i].end(),'#')==1){
                m=i+1; for(j=0;j<8;j++){if(a[i][j]=='#'){ n=j+1; }  } }
        }
       cout<<m<<" "<<n<<"\n";
    }

    return 0;
}
