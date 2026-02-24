
// my old code from codeforces..
#include<stdio.h>
#include<math.h>
int main()
{
    long long i,j,k,l,m,n,a[500000],b[100],t,v;
    scanf("%lld",&t);
    n=0;
    l=0;
    m=500000;

   // for(i=2;i<m;i++){ n=n+i; j=sqrt(n); if(j*j==n){ a[l]=i; l++; } }

    for(i=1;i<=m;i++){   n=n+i;j=sqrt(n); if(j*j==n){n=n+i+1; if(i!=m){a[i-1]=(i+1);a[i]=i; i++;} else{ a[m-1]=m;} } else{ a[i-1]=i; } }
   // for(i=0;i<m;i++){ printf("%d ",a[i]);  }
   // printf("\n");
  while(t--){

    scanf("%lld",&n);
    if(n==1){ printf("-1\n"); }
    else{
        if(v=((n*(n+1))/2),j=sqrt(v) ,j*j==v ){
             printf("%d",-1);
        }
       else{
        for(i=0;i<n;i++){ printf("%lld ",a[i]);  }
       }

   printf("\n");
    }
  }
    return 0;
}
