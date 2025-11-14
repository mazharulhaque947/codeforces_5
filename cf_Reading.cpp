#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int a[100],b[100],i,k,l,m,n,j;

    FILE *p,*q;

   // p=freopen("input.txt",'r',stdin);

    cin>>n>>k;

    for(i=0;i<n;i++){ b[i]=1+i; cin>>a[i]; }

    //fclose(p);

    for(i=0;i<n-1;i++){  l=i; for(j=i+1;j<n;j++){  if(a[j]>a[l]){ l=j;  }  } swap(a[i],a[l]); swap(b[i],b[l]);    }

    //q=freopen("output.txt",'w',stdout);

    cout<<a[k-1]<<"\n";
    for(i=0;i<k;i++){  cout<<b[i]; }
    cout<<"\n";
    //fclose(q);



    return 0;
}
