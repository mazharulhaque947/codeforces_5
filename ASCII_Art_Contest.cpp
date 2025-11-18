#include<bits/stdc++.h>

using namespace std;

int main()
{


int l,a[3],i,j,k,m,n;
n=3;
for(i=0;i<n;i++){ cin>>a[i]; }
for(i=0;i<n-1;i++){  
    l=i;
	for(j=i+1;j<n;j++){
           if(a[j]<a[l]){ l=j;  }
	}
       k=a[i];
       a[i]=a[l];
       a[l]=k;

}

if(a[2]-a[0]>=10){ cout<<"check again\n";  }
else{ cout<<"final "<<a[1]<<"\n"; }


return 0;

}
