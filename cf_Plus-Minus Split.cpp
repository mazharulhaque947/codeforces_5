#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,o,p,t;
    string q;
    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>q;

        o=0;
        k=0;
        l=0;

        for(i=0;i<n;i++){ if(q[o]==q[i]){k++;}
                          else{ a[l]=k; k=1; l++; o=i; }
                          if(i==n-1){ a[l]=k;l++;  }
                        }

                       // for(i=0;i<l;i++){ cout<<a[i]<<" jjjjjj"; } cout<<"\n";
         k=0;
         o=0;
         for(i=0;i<l;i++){
             if(i==l-1){ //cout<<"last\n";
             k=k+a[i]; }
             else if(a[i]<a[i+1]){ a[i+1]=a[i+1]-a[i]; //cout<<i<<" "<<a[i+1]<<"kkk\n";
              }
             else{ k=k+a[i]-a[i+1];//cout<<i<<" \n";
             i++;  }

         }

         cout<<k<<"\n";
    }

    return 0;
}
