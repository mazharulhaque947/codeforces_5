#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],b[100],i,j,k,l,m,n;

    cin>>n;
    for(i=0;i<n;i++){ cin>>a[i]>>b[i];}
    for(i=0;i<n-1;i++){ l=i; for(j=i+1;j<n;j++){ if(b[l]>b[j]){ l=j;  }  } swap(b[i],b[l]); swap(a[i],a[l]);  }
    //for(i=0;i<n;i++){ cout<<a[i]<<" "<<b[i]<<"\n";}
    k=0;
    for(i=0;i<n;i++){ if(b[i]!=b[0]){  break; }else{ if(a[i]>a[k]){  k=i;  }  }  }

    l=n-1;
    for(i=n-1;i>=0;i--){ if(b[i]!=b[0]){  break; }else{ if(a[i]<a[l]){  l=i;  }  }  }

    if(a[l]<a[k]){ cout<<"Happy Alex\n";  }
    else {
        cout<<"Poor Alex\n";

    }

    return 0;
}
