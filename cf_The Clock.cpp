
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
int c,d;
if(a>b){swap(a,b);}
while(a!=0){   c=a; a=b%a; b=c; }
return b;

}
int ston(string a){
int i,j,k,n;
k=0;
j=0;
for(i=0;i<2;i++){ k=k*10+(a[i]-48);  j=j*10+(a[3+i]-48);}
k=60*k+j;
return k;
}
int ntos(int n){
int h,m,i,j,k;
m=n%60;
h=n/60;
//cout<<h<< " "<<m<<"\n";
//  cout<<h/10<<h%10<<":"<<m/10<<m%10<<"\n";
int a[4];
a[0]=h/10;
a[1]=h%10;

a[2]=m/10;
a[3]=m%10;
//for(i=0;i<4;i++){cout<<a[i]<<" "; }cout<<"\n";
//cout<<a[0]<<a[1]<<a[2]<<a[3]<<"aaa\n";
int o=1;

if(a[0]==a[3]&&a[1]==a[2]){}
else{  o=0;}
return o;
//return a;
}
int pa(string b)
{
int o=1;

if(b[0]==b[4]&&b[1]==b[3]){}
else{  o=0;}
return o;
}
int ti(int a,int b)
{
int c,i,j,k,n,m;
//cout<<a<<" "<<b<<"\n";
c=a+b;
if(c>=24*60){ c=c%(24*60);  }
//cout<<c<<"\n";
return c;
}

int main()
{

int t;
cin>>t;
while(t--){
        string a;
int b,j,k,n,m,i;
cin>>a;
cin>>b;
//cout<<b<<"\n";
m=(1440*b)/gcd(1440,b);
//cout<<m<<"\n";
k=0;
for(i=0;i<m;i+=b){ j=i;  k=k+ntos(ti(ston(a),j)) ;}
cout<<k<<"\n";
}
return 0;
}
