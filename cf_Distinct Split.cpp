#include<bits/stdc++.h>

using namespace std;
void sol()
{


 }
int main()
{  int t;
int i,j,k,l,o,p,m,n;


    string b;

  /*
    for(i=0;i<2;i++){

        for(j=0;j<2;j++){  cout<<a[i][j]<<" ";  }
        cout<<"\n";

    }

    a.clear();
     for(i=0;i<2;i++){

        for(j=0;j<2;j++){  cout<<a[i][j]<<" ";  }
        cout<<"\n";

    }

  */

  cin>>t;

  while(t--)
  {   //sol();



vector<int>co(26,0);
vector< vector<int> >a( 200 , vector<int>(26,0));
      cin>>n;
      cin>>b;

       /*
       for(i=0;i<2;i++){

        for(j=0;j<2;j++){  a[i][j]+=t; cout<<a[i][j]<<" ";  }
        cout<<"\n";


}





  }
  */
  for(i=0;i<n;i++){ co[b[i]-97]++; for(j=0;j<26;j++){ a[j][i]=co[j];} }

//for(i=0;i<n;i++){  for(j=0;j<26;j++){ cout<<a[j][i]<<" ";} cout<<"\n"; }
m=0;
for(i=0;i<n-1;i++){   k=l=0;

    for(j=0;j<26;j++){ if(a[j][i]>0){ k++; } if(a[j][n-1]-a[j][i]>0){l++; } }
   if(k+l>m){m=l+k;}
   // cout<<k<<" "<<l<<"\n";
 }

 cout<<m<<"\n";

}

 return 0;
}
