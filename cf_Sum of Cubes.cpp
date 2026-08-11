#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a[10000],m,n,i,j,k,r,d,l,o,p,t;
    cin>>t;
    m=10000;
    for(i=0;i<m;i++){ a[i]=(i+1)*(i+1)*(i+1); }

    while(t--)
    {
        cin>>n;
        o=0;
        for(i=0;i<m;i++){

            if(a[i]>n){break;}


            p=n-a[i];

            l=0;
            k=m-1;

            while(l<=k){

                d=l+k;
                d=d/2;
                if(p==a[d]){ break; }
                else if(a[d]<p){l=d+1;}
                else{k=d-1;}

            }


            if(a[d]==p){o=1; break;}

        }

        o?cout<<"YES\n":cout<<"NO\n";

    }


    return 0;
}
