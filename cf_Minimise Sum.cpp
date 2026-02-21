#include<bits/stdc++.h>
int main()
{
    int a[200],b[200]i,j,k,l,m,n,t;
    std::cin>>t;
    while(t--)
    {
       std::cin>>n;
       m=0;
       k=0;
       l=0;
       for(i=0;i<n;i++){ std::cin>>a[i]; if(a[i]<a[k]){ k=i; } m=m+a[k];l=l+m;b[i]=l; }
       if( a[0]+a[1]<m ){m=a[0]+a[1];}
       for(i=1;i<n;i++){  if() }
       std::cout<<m<<"\n";
    }

    return 0;
}
