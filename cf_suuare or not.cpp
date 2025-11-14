#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,k,l,j,m,n,o,p,t;
    char a[201];
    cin>>t;
    while(t--)
    {
        //cin>>n;
        cin>>a;
        n=strlen(a);
        m=sqrt(n);
        if(m*m==n){
             p=0;
            for(i=0;i<m;i++){

                if(i==0||i==m-1){ for(j=0;j<m;j++){if(a[m*i+j]=='0'){ p=1;break; }  }}
                else{
                    if(a[m*i+0]=='1'&&a[m*i+m-1]=='1'){for(j=1;j<m-1;j++){if(a[m*i+j]=='1'){ p=1;break; }}   }
                    else{p=1; break;}
                }
               if(p==1){break;}
            }
            if(p==1){cout<<"NO\n";}
            else{cout<<"YES\n"; }

        }
        else{

            cout<<"NO\n";
        }



    }

    return 0;
}
