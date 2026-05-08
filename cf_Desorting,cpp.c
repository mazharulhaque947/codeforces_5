#include<stdio.h>

int main()
{
    int a[100],i,j,k,m,n,l,o,p,t;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++){scanf("%d",&a[i]);}

        k=1000000000;

        for(i=1;i<n;i++){ o=a[i]-a[i-1]; if(o<0){k=0; break;} if(o==0){k=1; } o=o/2 +1 ; if(o<k){k=o;} }
        printf("%d\n",k);
    }


    return 0;
}
