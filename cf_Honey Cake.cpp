#include<bits/stdc++.h>
using namespace std;
int iii(int a[],int aa[],int o,int l)
{    //cout<<o<<"\n";
    int i,j,k,m,n;
    m=0;
    for(i=1;i<=l;i++){ if(a[i]>=o){ break; } }

    for(;i<=l;i++){ if(a[i]==o){ //cout<<a[i]<<" "<<aa[i-1]<<"\n";
    if(aa[i-1]==0){ aa[i-1]=-6; m=1; break; }  }else{break;} }
    return m;
}
int main()
{

    int p[1000],pp[100],ppp,i,j,jj,k,l,m,n,o,a[200],aa[100],b[100],c[100],d[100],w,h,u,q[3];
    m=100;
    o=sqrt(m);
    for(i=0;i<m;i++){ p[i]=0; }
    p[0]=0;
    for(i=2;i<=o;i++){ if(p[i-1]==0){ for(j=i*i;j<=m;j+=i){ if(p[j-1]==0){p[j-1]=i;} }  } }
    ppp=0; for(i=1;i<m;i++){ //cout<<i+1<<" "<<p[i]<<"\n";
     if(p[i]==0){ pp[ppp]=1+i; ppp++;  } }

     cin>>w>>h>>u;
     cin>>n;

     k=n;
     l=0;
     j=0;
     while(j<ppp){ if(k>m){ if(k%pp[j]==0){ a[1+l]=pp[j]; k=k/pp[j];l++; }else{ j++; } }

        else{  if(k==1){ break; } else if(p[k-1]==0){ a[l+1]=k; l++; k=1; break; } else{ a[l+1]=p[k-1]; k=k/p[k-1]; l++; }   }
        if(k==1){break;} }
        if(k!=1){ a[l+1]=k; l++; }
     aa[0]=0;
      for(i=1;i<=l;i++){ //cout<<a[i]<<" ";
       aa[i-1]=0;}// cout<<"\n";

      q[0]=q[1]=q[2]=1;

       k=w;

     j=0;

     jj=0;
     while(j<ppp){ if(k>m){ if(k%pp[j]==0){ if( iii(a,aa,pp[j],l)==1 ){ q[jj]=pp[j]*q[jj];} k=k/pp[j]; }else{ j++; } }

        else{  if(k==1){ break; } else if(p[k-1]==0){ if( iii(a,aa,k,l)==1 ){ q[0]=k*q[0];} k=1; break; }
        else{ if( iii(a,aa,p[k-1],l)==1 ){ q[jj]=p[k-1]*q[jj];} k=k/p[k-1];  }   }
        if(k==1){break;} }
        if(k!=1){ if( iii(a,aa,k,l)==1 ){ q[jj]=k*q[jj];} }

       k=h;

     j=0;

      jj=1;
       while(j<ppp){ if(k>m){ if(k%pp[j]==0){ if( iii(a,aa,pp[j],l)==1 ){ q[jj]=pp[j]*q[jj];} k=k/pp[j]; }else{ j++; } }

        else{  if(k==1){ break; } else if(p[k-1]==0){ if( iii(a,aa,k,l)==1 ){ q[0]=k*q[0];} k=1; break; }
        else{ if( iii(a,aa,p[k-1],l)==1 ){ q[jj]=p[k-1]*q[jj];} k=k/p[k-1];  }   }
        if(k==1){break;} }
        if(k!=1){ if( iii(a,aa,k,l)==1 ){ q[jj]=k*q[jj];} }



          k=u;

     j=0;
      jj=2;

       while(j<ppp){ if(k>m){ if(k%pp[j]==0){ if( iii(a,aa,pp[j],l)==1 ){ q[jj]=pp[j]*q[jj];} k=k/pp[j]; }else{ j++; } }

        else{  if(k==1){ break; } else if(p[k-1]==0){ if( iii(a,aa,k,l)==1 ){ q[0]=k*q[0];} k=1; break; }
        else{ if( iii(a,aa,p[k-1],l)==1 ){ q[jj]=p[k-1]*q[jj];} k=k/p[k-1];  }   }
        if(k==1){break;} }
        if(k!=1){ if( iii(a,aa,k,l)==1 ){ q[jj]=k*q[jj];} }





    // cout<<"    "<<q[0]<<" "<<q[1]<<" "<<q[2]<<"    ";
     jj=0;
      for(i=1;i<=l;i++){// cout<<a[i]<<" "<<aa[i-1]<<" ";
       if(aa[i-1]==-6){jj++;}  }
   // cout<<"hhhh"<<l<<"  "<<jj<<"\n";
      if(jj==l){ cout<<q[0]-1<<" "<<q[1]-1<<" "<<q[2]-1<<"\n"; }
      else{  cout<<"-1\n"; }

    return 0;
}
