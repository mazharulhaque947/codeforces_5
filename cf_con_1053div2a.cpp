#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k,m,n,o,p,c[400],b[200],l,s;
    cin>>t;

    while(t--)
    {

        cin>>n>>m;
        for(i=0;i<m;i++){ cin>>b[i]; }
        l=0;
        s=c[l]=b[l];
        l++;
        k=0;
        if(m==1){ c[l]=b[0]; l++; }
        for(i=1;i<m;i++){ if(s+1==b[i]){s=s+1;k++;}
        else{  if(k==0) {c[l]=s;} else{c[l]=s;} l++; s=c[l]=b[i]; l++; k=0; }
        if(i==m-1){ if(k==0) {c[l]=s;} else{c[l]=s-0;  }l++;  }

         }

        // for(i=0;i<l;i++){ cout<<c[i]<<"<< "; }
        if(l==2){ n=n-(c[1]-1); cout<<n<<"\n"; }
        else{ cout<<"1\n"; }
    }

    return 0;
}
