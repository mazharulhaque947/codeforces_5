 #include<bits/stdc++.h>

using namespace std;

int tob(int *b,int u,int l)
{


    int m,n,o,p,i,j,c[100];
    o=0;
    for(i=0;i<l;i++){b[i]=0;}
    m=u;
    //if(m==0){  return ; }
    while(m>0){

        c[o]=m%2;
        m=m/2;
        o++;


    }

    for(i=0;i<o;i++){

        b[i]=c[i];
  // cout<<b[i]<<" ";
    }
//cout<<"\n";


return o;
}
/*
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
*/
int valu(int *a,int o){

int u,p,i,k;
k=0;
p=1;
for(i=0;i<o;i++){ if(a[i]==1){k=k+p;} p=p*2; }


return p;
}


void sol(){

int a[100],b[100],c[100],o,i,k,l,m,n,x,y,z,u,v;
o=60;
cin>>x>>y;
if(k=tob(a,x,o),l=tob(b,y,o)
   ,l>k){ cout<<-1<<"\n"; }
else{

    //cout<<k<<"\n";
  m=1;
  z=0;
  v=0;
for(i=0;i<k;i++){  if(a[i]!=b[i]){  c[z]=m; z++; } m=m*2;  }
cout<<z<<"\n";
for(i=0;i<z;i++){  cout<<c[i]<<" ";  }
cout<<"\n";
}


}

int main()
{

int t;

cin>>t;
while(t--){ sol(); }
    return 0;
}
