#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    int t,i,j,k,l,m,n,o,p;
    string b;
    cin>>t;
    while(t--)
    {
        b.clear();
        cin>>n;

        cin>>b;

        o=p=0;
        k=b[n-1]-48;

        k=k%2;
        for(i=0;i<n;i++){ m=b[i]-48; if(m%2==0){p++;}else{o++; }  }
        cout<<p<<" "<<o<<"\n";

        if(k==1){qwe

            if(o%2==0){ cout<<b<<"\n"; }
            else{
                    cout<<"-1\n";
                //m=0;
                //while( (b[m]-48)%2!=1 ){ m++; }



            }

        }
        else{




        }

    }


    return 0;
}
