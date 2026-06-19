#include<bits/stdc++.h>
#define int long long

using namespace std;

int ss(int s, int o,int l,int h,int n,int c){

int j,k,m;

k=-1;

while(l<=h){
    m=l+(h-l)/2;
    //cout<<m<<"\n";
    if(s+4*o*m+4*m*m*n==c){ k=m; break; }
    else if(s+4*o*m+4*m*m*n<c){l=m+1;}
    else{h=m-1;}

}

return k;

}


int32_t main()
{

    int a[100],o,p,j,i,k,l,c,m,n,t;

    cin>>t;

    while(t--){

       cin>>n>>c;

       o=p=0;
       for(i=0;i<n;i++){cin>>a[i];o=o+a[i];p=p+a[i]*a[i];}

        l=0;
        m=100;
        k=-1;

        while( k=ss(p,o,m*l,m*l+m-1,n,c), k==-1 ){  l++;}

        cout<<k<<"\n";
    }


    return 0;
}
