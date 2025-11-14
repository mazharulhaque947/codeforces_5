#include<bits/stdc++.h>

using namespace std;
int com(char a[], char b[],int n){

int i,l,k;
l=1;
for(i=0;i<n;i++){

    if(a[i]!=b[i]){ l=0 ; break;}
}

return l;

}

void sett(char a[],char *p,int n, int k){

int i,l;

for(i=0;i<k;i++){ p[101*k+i]=a[i]; }
p[101*k+i]='\0';



}

int main()
{
    int i,j,k,m,n,o,p,s,t,c[100],d[100];
    char a[101],b[100][101];





    cin>>n>>m;
    for(i=0;i<n;i++){ cin>>c[i]; }

    k=0;
    for(i=0;i<m;i++){

        cin>>a;
        o=strlen(a);
        p=-1;
        for(j=0;j<k;j++){
             p=0;
              if(o==strlen(b[j])){
                 // cout<<i<<" "<<j<<"in check  ";

                for(s=0;s<o;s++){ //cout<<a[s]<<" "<<b[j][s]<<" ";
                 if(b[j][s]!=a[s]){p=1; break;} }


              }
              else{p=1;}
              if(p==0){// cout<<"check ok";
               p=j; break; }
              else{p=-1;}

        }
        if(p!=-1){ d[p]=d[p]+1; }
        else{  d[k]=1;  for(j=0;j<o;j++){ b[k][j]=a[j]; } b[k][j]='\0';// cout<<k<<"  "<<b[k]<<"\n";
         k++; }

      }


sort(c,c+n);
sort(d,d+k);

t=0;

for(i=0;i<k;i++){ t=t+d[k-1-i]*c[i]; }

cout<<t<<" ";
t=0;

for(i=0;i<k;i++){ t=t+d[k-1-i]*c[n-1-i]; }

cout<<t<<" \n";

    return 0;
}
