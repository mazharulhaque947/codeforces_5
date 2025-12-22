#include<bits/stdc++.h>

using namesppace std;

int main()
{

       int t,i,j,k,m,n;
       cin>>t;
       while(t--){

	 cin>>k>>m;
	 if(m<k){ cout<<"0 0\n"; }
	 else{
                j=m/k;
		if(j*k==m){ cout<<"1 "<<j<<"\n";  }
		else{ cout<<"0 0\n"; }


	 }

       }
	return 0;


}
