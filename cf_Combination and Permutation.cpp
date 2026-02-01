
#include<bits/stdc++.h>
#define int long long
using namespace std;
int f(int n){
 if(n<=1){return 1;}
 return n*f(n-1);

}
int main()
{
    int a[31],b[31],i,j,k,l,m,n;
    cin>>n>>m;
    k=-1;
    for(i=0;i<n;i++){

        a[0]=1;
        a[i]=1;
        for(j=1;j<i;j++){a[j]=b[j]+b[j-1]; }

       for(j=0;j<=i;j++){ if(i+1==n&&j==m){ k=a[j];break; } b[j]=a[j];}


       if(k!=-1){break;}
    }
    cout<<k<<" "<<k*f(m)<<"\n";
    return 0;
}
