
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[26],b[1000][26],i,j,k,m,n,o,p,h,q,r,v;
    char c[3000][101];
    cin>>n;
    m=0;
    for(i=0;i<n;i++){

     for(j=0;j<26;j++){ a[j]=0; }
      cin>>c[i];
      //cout<<c[i];
      k=strlen(c[i]);
     // cout<<k<<" >>>>>";
      for(j=0;j<k;j++){q=c[i][j]; a[q-97]=1; }
 //for(j=0;j<26;j++){ cout<<a[j]<<" "; } cout<<"\n";
      o=1;
      v=0;
      for(j=0;j<m;j++){
        h=1;

      //  cout<<m<<"   in  "<<j<<"  \n";
       // for(p=0;p<26;p++){  cout<<p<<" >> "<<b[m][p]<<"  "; } cout<<"\n";

        r=1;for(p=0;p<26;p++){ if(b[j][p]==a[p]){} else{ r=0; break; }}

        if(r==1){ v++;}


      }
      // if(v==0){  }
      if(v==0){  for(p=0;p<26;p++){// cout<<p<<" val "<<a[p]<<" \n";
      b[m][p]=a[p]; } m++; }



    }
    cout<<m<<"\n";
    return 0;
}
