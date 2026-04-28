#include<bits/stdc++.h>
using namespace std;

int main()
{
long long a[100],l,k,i,j,m,n,o,p,t;

//FILE *F1;
//F1=freopen("lab1b.txt","r",stdin);
cin>>t;
//Plain text
for(j=0;j<t;j++)
{
cin>>n;
cin>>m;

   o=m/n;
   p=(o-1)*n;

     if(p<=n){//cout<<"YES\n";
     a[i]=-1;}
     else{//cout<<"NO\n";
     a[j]=p;}

}

//fclose(F1);

//FILE *F2;
//F2=freopen("lab1b_ans.txt","w",stdout);
for(j=0;j<t;j++){

    //cout<<a[j]<<"\n";
    if(a[j]!=-1){ cout<<"NO\n"; }
    else{  cout<<"YES\n";  }
}

//fclose(F2);
return 0;
//Plain text
}
