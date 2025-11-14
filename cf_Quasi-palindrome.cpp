#include<bits/stdc++.h>
using namespace std;
int delz(int a)
{

    while(a%10==0){a=a/10;}
    return a;

}
int ispa(int a){

int c[10],i,k,l,m,n;
n=0;
while(a>0){c[n]=a%10; a=a/10; n++;}
m=n/2;
k=1;

for(i=0;i<m;i++){ if(c[i]!=c[n-1-i]){k=0; break;}  }


return k;

}

int main()
{
    int n;
    cin>>n;
    if(ispa(delz(n))){cout<<"YES\n";}
    else{ cout<<"NO\n"; }
    return 0;
}
