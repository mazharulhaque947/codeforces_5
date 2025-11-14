#include<bits/stdc++.h>
int rev(int n)
{
    int s,p,m;
    m=n;
    p=0;
    while(m>0){
       p=p*10+m%10;
       m/=10;

    }

    return p;
}
int nm(int n,int c){

    c=c*10+(n-48);
    return c;
}

using namespace std;

int main()
{
    char a[1000];

    int i,j,k,l,m,n,o,p,s,t,b[100],c[100];

    cin>>a;
    n= strlen(a);
    s=0;
    l=0;
    for(i=0;i<n;i++){

        if(a[i]==','){ b[l]=s; s=0; l++; }
        else{ s=nm(a[i],s);  }
        if(i==n-1){  b[l]=s; s=0; l++; }

    }


    sort(b,b+l);
    s=0;
    k=0;
    for(i=0;i<l;i++){
      if(b[i]==b[s]){  }
      else{ c[k]=b[s]; s=i; k++; }

       if(i==l-1){ c[k]=b[s];  k++;  }
    }



    cout<<c[0];
    s=c[0];
    p=0;
    for(i=1;i<k;i++){


        if(s+1==c[i]){ p++; s=c[i]; }
       // else{  if(p>0){cout<<"-"<<s<<","<<c[i];}else{ cout<<","<<c[i]; } s=c[i]; p=0; }
        //if(i==n-1){  if(p>0){cout<<"-"<<s<<","<<c[i];}else{ cout<<","<<c[i]; } s=c[i]; p=0;  }
        else{   if(p>0){  cout<<"-"<<c[i-1]<<","<<c[i]; s=c[i]; p=0; } else{ cout<<","<<c[i]; s=c[i]; p=0; }        }
        if(i==k-1){ if(p>0){  cout<<"-"<<c[i]; s=c[i]; p=0; } else{  }    }
    }


    return 0;
}
