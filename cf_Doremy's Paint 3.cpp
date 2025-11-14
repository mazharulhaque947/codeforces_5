#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,a[100],b[200],i,j,k,m,n,o,p,l,z;
    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++){

            cin>>a[i];

        }
        sort(a,a+n);
        l=0;
        z=0;
        k=0;
        for(i=0;i<n;i++){

           if(a[i]==a[z]){k++;}
           else{ b[l*2]=a[z]; b[2*l+1]=k; k=1;l++; z=i; }
            if(i==n-1){b[l*2]=a[z]; b[2*l+1]=k; k=1;l++; }


        }
        for(i=0;i<l;i++){  cout<<b[2*i]<<" "<<b[2*i+1]<<" \n"; }

        if(l>2){ cout<<"NO\n"; }
        else{
                if(l==1){cout<<"YES\n";}
                else{
            m=n/2;
            k=b[1]/2;
            z=b[3]/2;
            p=z-k;
            if(p<0){p=p*-1;}
            if(p<=1){ cout<<"YES\n"; }
              else{cout<<"NO\n"; }

                }
        }

    }

    return 0;
}
