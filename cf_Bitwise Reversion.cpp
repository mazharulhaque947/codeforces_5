#include<bits/stdc++.h>

using namespace std;

void tob(int *b,int u,int l)
{


    int m,n,o,p,i,j,c[100];
    o=0;
    for(i=0;i<l;i++){b[i]=0;}
    m=u;
    if(m==0){  return ; }
    while(m>0){

        c[o]=m%2;
        m=m/2;
        o++;


    }

    for(i=0;i<o;i++){

        b[i]=c[i];

    }




}

void addd(int *a, int *b,int *c,int o)
{
int i,j;
for(i=0;i<o;i++){ if(a[i]==1||b[i]==1){ c[i]=1; }else{c[i]=0;} }

}
int vall(int *a , int * b,int o)
{


    int s,i,k;
    s=1;
    k=0;
    for(i=0;i<o;i++){ if(a[i]==1&&b[i]==1){ k+=s; } s*=2; }
    //cout<<k<<" <<";
    return k;
}

int val( int * b,int o)
{


    int s,i,k;
    s=1;
    k=0;
    for(i=0;i<o;i++){ if(b[i]==1){ k+=s; } s*=2; }
    return k;
}

void man()
{

    int a[3][10],b[3][10],c[3],i,k,l,j,o,p;


    o=10;
    for(i=0;i<3;i++){
        cin>>c[i];

        tob(a[i],c[i],o);
       // for(j=0;j<o;j++){ cout<<a[i][j]<<" "; } cout<<"\n";

    }

    for(i=0;i<3;i++){

        addd( a[i], a[ (i+2)%3],b[i],o );
        // for(j=0;j<o;j++){ cout<<b[i][j]<<" "; } cout<<"\n";

    }
    p=1;


    for(i=0;i<3;i++){


        if( c[i]!=vall(b[i],b[(i+1)%3],o)  ){p=0;break;}

    }


    if(p==1){
       // for(i=0;i<3;i++){cout<<val(a[i],o)<<" ";}
        cout<<"YES\n";
    }
    else{


         cout<<"NO\n";
    }

}
int main()
{

int t;

cin>>t;
while(t--){ man(); }
    return 0;
}
