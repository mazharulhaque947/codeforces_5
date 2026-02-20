#include<bits/stdc++.h>
int main()
{
    int a[100],i,j,k,l,m,n,t;
    std::cin>>t;
    while(t--)
    {
       std::cin>>n;
       m=0;
       k=0;

       for(i=0;i<n;i++){ std::cin>>a[i]; if(a[i]<a[k]){ k=i; } m=m+a[k]; }

       if(a[0]+a[1]<m){ m=a[0]+a[1]; }
       std::cout<<m<<"\n";
    }

    return 0;
}
