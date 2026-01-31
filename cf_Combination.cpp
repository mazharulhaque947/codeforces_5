//Combintion
#include<bits/stdc++.h>
using namespace std;
float c(int a,int b){
float v;
v=1;
if(b==0){  return v;}

else if(b>0){ v=v*((a-b+1)*1.0/b)*c(a,b-1);  }

return v;
}

int main()
{
int n,k;
cin>>n>>k;
cout<<(int)c(n,k);
return 0;
}
