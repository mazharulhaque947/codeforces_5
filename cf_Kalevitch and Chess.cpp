#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
string a[50];
int i,n,m,k,j,l;
for(i=0;i<8;i++){ cin>>a[i]; }

k=0;
for(i=0;i<8;i++){

  if(count(a[i].begin(),a[i].end(),'B')==8){k++;}


}
if(k==8){cout<<8<<"\n"; }
else{
  m=0;
  for(i=0;i<8;i++){
l=1;
  for(j=0;j<8;j++){
if(a[j][i]!='B'){ l=0;break; }



}
m+=l;


}
 cout<<k+m<<"\n";

}

//cout<<a[0].begin();
//<<a.begin()+2<<a.begin()+9;

return 0;
}
