// Eleven
#include<bits/stdc++.h>

using namespace std;

int main()
{
int a[1000],i,j,k,n,t;
a[0]=1;
a[1]=1;
t=1;
for(i=2;a[i-1]<=1000;i++){ a[i]=a[i-1]+a[i-2];   }
t=i;
cin>>n;
j=1;
for(k=0;k<n;k++){  if(k+1==a[j]){ 	cout<<"O"; j++;  } else{ cout<<"o";  }  }
cout<<"\n";
return 0;
}
