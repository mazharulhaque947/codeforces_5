// this is multiplication
#include<bits/stdc++.h>
#define int long long
using namespace std;
/*
void q(string& a,int n){
 int i,j,m,o;
 //for(i=0;i<n;i++){ cout<<(void*)(&a[i])<<" "; } cout<<"\n";
   for(i=0;i<n;i++){ a[i]++;cout<<(a[i])<<" "; } cout<<"\n";
}
*/

int ss(string &a,string &b,int n,int m)
{ //   cout<<"ssssssss       "<<n<<m<<" "<<a<<"\n"<<b<<"\n";
    int r,c,d,i,u,v;
    r=n;
    if(m>n){r=m;}
    c=0;

    for(i=0;i<r;i++){
        //cout<<a[i]<<" "<<b[i]<<"\n";
        u=a[i];
        v=b[i];
      //  cout<<a<<"\n"<<b<<"\n";
        d=u+v-48-48+c;
        c=d/10;
        d=d%10;
       // cout<<c<<" "<<d<<"\n";
        b[i]=d+48;
    }
    if(c!=0){b[i]=c+48; r++;}

    return r;
}

int mm(string &a,string &b,int n,int v){

 int r,c,d,i,u;
//cout<<v<<"\n";
    c=0;

    for(i=0;i<n;i++){
        //cout<<a[i]<<" "<<b[i]<<"\n";
        u=a[i]-'0';
        //cout<<u<<"  "<<i<<" "<<n<<"\n";
      //  cout<<a<<"\n"<<b<<"\n";
        d=u*9+c;
        c=d/10;
        d=d%10;
  //cout<<c<<" "<<d<<"\n";
        b[i+v]=d+48;
    }
    if(c!=0){b[i+v]=c+48; n=n+1;}
 //  for(i=0;i<n+v;i++){cout<<b[i]<<" ";}cout<<"\n";
    return n+v;
}

int  mmm(string &a,string &b,string &c,string &d,string &f,int aa[4]){

    int i,j,n,m;

 // cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<f<<"\n";
        aa[0]=mm(a,b,aa[0],0);
   //    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<f<<"\n";
         aa[1]=mm(a,c,aa[1],1);
     //    cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<f<<"\n";
          aa[2]=mm(a,d,aa[2],2);
       //  cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<f<<"\n";
           aa[3]=mm(a,f,aa[3],3);
         //  cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d<<"\n"<<f<<"\n";



     aa[0+1]= ss(b,c,aa[0],aa[0+1]);
      aa[1+1]= ss(c,d,aa[1],aa[1+1]);
      aa[2+1]= ss(d,f,aa[2],aa[2+1]);
   sort(aa,aa+4);
   return aa[3];


}

int32_t main()
{    int n,i,m,o,p,j,b[4];
    string a[10];
    //a[0]="rrrrB";
   // for(i=0;i<5;i++){a[0][i]='6';} a[0][i]='\0';

   a[0]=a[1]=a[2]=a[3]=a[4]=a[5]=string(109,'0');  //  increase the string size to 10009
   cin>>a[6];
  a[7]="9999";
   n=a[6].size();
   m=a[7].size();
  // cout<<n<<" "<<m<<"\n";
   for(i=0;i<4;i++){b[i]=n;}
   reverse(a[6].begin(),a[6].end());
  // reverse(a[7].begin(),a[7].end());

   a[0]=a[6]+a[0];
   a[1]=a[7]+a[1];
   m=ss(a[0],a[1],n,m);
   for(i=m-1;i>=0;i--){ cout<<a[1][i];  }cout<<" \n";

   m=mmm(a[0],a[2],a[3],a[4],a[5],b);
 // cout<<m<<"\n";
    for(i=m-1;i>=0;i--){ cout<<a[5][i];  }cout<<" \n";

    return 0;
}


