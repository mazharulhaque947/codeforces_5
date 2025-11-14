#include<bits/stdc++.h>
#include<string.h>

using namespace std;
void addd(string &a,int p,int r){
cout<<p<<r<<"\n";
   a[p]=r;


}
int main()
{
    string a;
    char y;
    int n,m,k,j,i,o,p;
    cin>>a;

   // addd(a);
    //cout<<a;
    //cout<<count(a.begin(),a.end(),'.')<<"  ";
    if(count(a.begin(),a.end(),'.')==0){  cout<<a<<"\n";  }
    else if( count(a.begin(),a.end(),'.')>1 ){ cout<<-1<<"\n"; }
    else{
       auto u = a.find('.');
       //cout<<u<<" ";
       if(u==a.size()){  cout<<a<<"\n"; }
       else{
          if(a[u+1]<'5'){  a.erase(u); cout<<a; }


          else{ a.erase(u);
          if(u==count(a.begin(),a.end(),'9')){  cout<<1; for(i=0;i<u;i++){cout<<0;} }
          else{
          o=u-1 ;p=1; while(o>=0){ k=a[o]-48+p; p=k/10; k=k%10;
           a[o]=48+k;  o--;   if(p==0){break;}} cout<<a<<"\n";




          }

       }

       }
      //cout<<  a.find('.') - a.begin();


    }

    return 0;
}
