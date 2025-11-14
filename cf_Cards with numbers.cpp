
#include<bits/stdc++.h>

using namespace std;
// mearg sort
int x[300],y[300];
void mear(int *a,int *c,int l,int k)
{
   int i,j,m,n,p,v,u;
   u=l;
   p=l+(k-l)/2;
   v=p+1;
   m=0;
   //cout<<"in mmmmmmm"<<l<<"   "<<k<<"\n";
   while(m<k-l+1){
       // cout<<m<<"\n";
   if(u>p){

    x[m]=a[v];
    y[m]=c[v];
    v++;
    m++;

    }
   else if(v>k){
    x[m]=a[u];
    y[m]=c[u];
    u++;
    m++;
   }
   else{
        if(a[u]<=a[v]){  x[m]=a[u];y[m]=c[u]; u++; m++; }
        else{   x[m]=a[v];y[m]=c[v];v++; m++; }


   }

   }
   for(i=0;i<m;i++){ a[l+i]=x[i]; c[l+i]=y[i];//cout<<b[i]<<" ";
   }

}

void merr(int *a,int *c,int l, int k){

int o,p,j,i;

p=l+(k-l)/2;

if(k-l>0){
        //cout<<"in divv "<<l<<" "<<k<<"\n";
        //for(i=l;i<=k;i++){  cout<<i<<">>"<<a[i]<<"  "; }
        //cout<<"\n";
        merr(a,c,l,p); merr(a,c,p+1,k);   }





   if(k-l>=0){//cout<<"in merrr "<<l<<" "<<k<<"\n";
   mear(a,c,l,k);}

}

// sort


int main()
{
int t,a[3000],b[5000],c[300],d,n,i,o,p;
t=1;
while(t--)
{

    FILE *pp,*qq;
   // pp=freopen("input.txt",'r',stdin);

cin>>n;
n=n*2;
for(i=0;i<5000;i++){b[i]=0;}
for(i=0;i<n;i++){cin>>d;a[i]=d;c[i]=i+1; b[d-1]++;}
//fclose(pp);
//qq=freopen("output.txt",'w',stdout);
d=0;
for(i=0;i<5000;i++){if(b[i]%2==1){d=1;break;}}
if(d==1){ cout<<-1<<"\n";}
else{

        merr(a,c,0,n-1);
        n=n/2;
     for(i=0;i<n;i++){  cout<<c[2*i]<<" "<<c[2*i+1]<<"\n"; }


}
//fclose(qq);

}
return 0;
}
