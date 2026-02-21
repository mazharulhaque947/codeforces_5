#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[200][200],i,j,b[399],c[399],m,n,o,p,t,k,l;
    cin>>t;
    while(t--)
    {

        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++){ cin>>a[i][j]; }
        }

        for(i=0;i<m;i++){

            o=0;
            l=i;
            k=0;
            while(k<n&&l<m){o=o+a[k][l]; k++;l++;}
            //cout<<-i+m-1<<" "<<o<<"\n";
            b[-i+m-1]=o;
        }
         for(i=1;i<n;i++){

            o=0;
            l=i;
            k=0;
            while(k<m&&l<n){o=o+a[l][k]; k++;l++;}
           // cout<<i+m-1<<" "<<o<<"\n";
            b[i+m-1]=o;
        }

        for(i=0;i<m;i++){

            o=0;
            l=i;
            k=0;
            while(k<n&&l>=0){o=o+a[k][l]; k++;l--;}
            //cout<<i<<" "<<o<<"\n";
            c[i]=o;
        }
         for(i=1;i<n;i++){

            o=0;
            l=i;
            k=m-1;
            while(k>=0&&l<n){o=o+a[l][k]; k--;l++;}
            //cout<<i+m-1<<" "<<o<<"\n";
            c[i+m-1]=o;
        }
        k=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++){ l=b[i-j+m-1]+c[i+j]-a[i][j];if( k<l ){k=l;} }

        }
        cout<<k<<"\n";
    }
    return 0;
}
