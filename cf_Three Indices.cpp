
#include<bits/stdc++.h>

using namespace std;


int main()
{

    int a[2000],i,j,k,l,o,p,m,n,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        l=1;
        for(i=0;i<n;i++){ cin>>a[i]; if(a[i]!=i+1){ l=0; } }
        if(0){ cout<<"NO\n"; }
        else{

            //cout<<"YES\n";

            k=0;
            for(i=1;i<n-1;i++)
            {

                for(j=i-1;j>=0;j--){

                    for(l=i+1;l<n;l++){

                        if(a[i]>a[l]&&a[i]>a[j]){ o=j+1;p=i+1;m=l+1;k=1; break; }


                    }
                    if(k==1){break;}
                }
                if(k==1){break;}
            }


        }
        if(k==0){ cout<<"NO\n"; }
       else{ cout<<"YES\n"<<o<<" "<<p<<" "<<m<<"\n"; }

    }

    return 0;
}
