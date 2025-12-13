#include<bits/stdc++.h>

using namespace std;

int main()
{
    int b[2],i,j,k,l,m,n,o,p,t,mm;
    //char a[2][101];
    string a[2];
    string d;
    cin>>t;

    while(t--)
    {

        cin>>n>>m>>l;
        cin>>a[0];
        cin>>a[1];
        sort(a[0].begin(),a[0].end());
        sort(a[1].begin(),a[1].end());
        //cout<<a[1]<<" "<<a[0]<<"\n";
        k=0;
        mm=0;
        o=0;
        b[0]=b[1]=0;
        if( a[k][b[k]]>a[1-k][b[1-k]] ){ k=1-k; }

        while( ! ( b[0]==n || b[1]==m  ) ){
           // cout<<k<<"k "<<b[0]<<"b0 "<<b[1]<<"b1 "<<mm<<"mm \n";
            if(mm==l){ //cout<<"oo";
            mm=0; k=1-k; }
            else{
                 if( a[k][b[k]]<=a[1-k][b[1-k]] ){ //cout<<"pp";// mm++;
                 }
                else{ //cout<<"uu";
                k=1-k; mm=0;  }
            }

            cout<<a[k][b[k]]<<"";
          // d[o]=a[k][b[k]];
           o++;
            b[k]++;
            mm++;
           // if( b[0]==n || b[1]==m ){ break; }
        }
       // d[o]='\n';
         cout<<"\n";

    }

    return 0;
}
