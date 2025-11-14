#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,o,p,t,s;
    char a[101];

    cin>>a;
    n=strlen(a);

    m=n-1;


    while(m>0){

        for(i=0;i<n-m;i++){
//cout<<"iii"<<i<<"\n";
            for(j=i+1;j<=n-m;j++){
                   // cout<<"jjjjjj"<<j<<"\n";
               o=1;

                for(k=0;k<m;k++){// cout<<"comp "<<i+k<<" "<<j+k<<"\n";
                 if(a[k+i]!=a[k+j]){ o=0; break;} }
                 // cout<<"\n";
                if(o==1){break;}
            }
//cout<<"\n";
             if(o==1){break;}


        }


        if(o==1){break;}
        m--;

    }
    cout<<m<<"\n";

    return 0;
}
