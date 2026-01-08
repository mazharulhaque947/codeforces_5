#include<bits/stdc++.h>

using namespace std;
int aa(string *a,string *b,int n){

cout<<&a<<"  "<<&b<<"\n";
}
int main()
{
    int i,j,k,m,n,t,a[51];
    char b[51][51];
    char c;
    cin>>b[0];

    n=strlen(b[0]);
    for(i=0;i<n;i++){a[i]=-1;}
   // cout<<n<<"\n";
    for(i=1;i<n;i++){
        c=b[i-1][n-1];
        for(j=1;j<n;j++){  b[i][j]=b[i-1][j-1]; }
        b[i][0]=c;
       // b[i][n]='\0';
    }

    m=0;
/*
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
       cout<<b[i][j]<<" ";}
       cout<<"\n";
    }
*/
  for(i=0;i<n;i++){
    if(a[i]==-1){  a[i]=m;

    for(j=i+1;j<n;j++){
        t=1;
        for(k=0;k<n;k++){if(b[i][k]!=b[j][k]){t=0; break;} }
        if(t==1){ a[j]=m; }

    }



    m++;
     }


  }

    cout<<m<<"\n";

    return 0;
}
