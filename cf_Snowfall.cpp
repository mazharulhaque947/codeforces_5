
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,z,t,o,p,b[100],c[100],d[200],f[200];
    cin>>t;

    while(t--)
    {
        cin>>n;
        o=p=l=z=0;
        for(i=0;i<n;i++){cin>>a[i];if(a[i]%6==0){b[o]=a[i]; o++;}
                                   else if(a[i]%3==0){c[p]=a[i];p++;}
                                    else if(a[i]%2==0){ d[l]=a[i]; l++; }
                                    else{  f[z]=a[i]; z++; }

                                    }
     for(i=0;i<o ;i++){ cout<< b[i]<<" "; }
     for(i=0;i<p ;i++){ cout<< c[i]<<" "; }
     for(i=0;i<l ;i++){ cout<< d[i]<<" "; }
     for(i=0;i<z ;i++){ cout<< f[i]<<" "; }

       cout<<"\n";



    }

    return 0;
}
