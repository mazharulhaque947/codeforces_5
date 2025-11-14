#include<bits/stdc++.h>

using namespace std;
int val(int k, int o){

int a=o;

while(k>0){a=a*10;k--;}

return a;

}
int nrev(int n){

int s=0;

while(n>0){ s=s*10+n%10; n=n/10; }


return s;

}
int conv(int n, int b)
{
    int m,s,i,j,a[10],l;

    s=l=0;
    m=n;
    while(m>0){

        j=m%b;
        a[l]=j;
        l++;
        m=m/b;
        //s=s*10+j;

    }

    for(i=0;i<l;i++){ s=s+val(i,a[i]); }
   // s=nrev(s);
    return s;

}

int main()
{   int j,i,h,k,m,n,a[10][10];



    cin>>n;

    for(i=1;i<n;i++){  for(j=1;j<n;j++){  cout<<conv(i*j,n   )<<" ";  }   cout<<"\n";  }

    return 0;
}
