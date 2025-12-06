#include<bits/stdc++.h>

using namespace std;
int bi(int a[],int k){

int i,j,m,n;
m=0;
n=k;
for(i=0;i<32;i++){ a[i]=0; }
while(n>0){  a[m]=n%2; n=n/2; m++; }
return m;
}

void bb(int a[],int b[]){

int m,i,n;
n=32;
for(i=0;i<n;i++){  if(b[i]==1){  if(a[i]==0){ b[i]=0; } } }

}

int v(int a[]){

int o,i,n,b;
n=32;
o=0;
b=1;
for(i=0;i<n;i++){  o=o+a[i]*b; b=b*2; }
return o;
}
int main()
{

    int a[32],c[32],l,k,m,n,i,j,o,p,b[100],t;
    cin>>t;
    while(t--){

        cin>>n;

        for(i=0;i<32;i++){ c[i]=1; }

       //  for(i=0;i<10;i++){ cout<<c[i]<<" "; } cout<<"\n";
       //  bi( c, 5);
         // for(i=0;i<10;i++){ cout<<c[i]<<" "; } cout<<"\n";
        for(i=0;i<n;i++){ cin>>b[i];
             bi(a,b[i]);
             bb(a,c);


         }
        cout<<v(c)<<"\n";;
    }

    return 0;
}
