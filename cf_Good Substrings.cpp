
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int b[1500][26],i,j,k,kk,l,n,o,aa,t,c[100];
    unordered_map<string,int>m;
    set<string>ss;
    string d,g;
    char a[10000];


        cin>>d;
    cin>>g;
    cin>>kk;
    n=d.size();


    for(i=0;i<26;i++){ b[0][i]=0; }
     b[0][d[0]-97]=1;
    for(i=1;i<n;i++){  for(j=0;j<26;j++){ b[i][j]=b[i-1][j]+0; } b[i][d[i]-97]=b[i-1][d[i]-97]+1; }


   // for(i=0;i<n;i++)
   // {

//        for(j=0;j<26;j++){ cout<<b[i][j]; } cout<<"\n";

  //  }

    aa=0;

    for(i=0;i<n;i++){

       for(j=i;j<n;j++){



       l=0;
       o=0;
       for(k=0;k<26;k++){ if(g[k]=='0'){  o=o+b[j][k]; if(i>0){ o=o-b[i-1][k]; }} }
         //cout<<o<<"\n";
       if(o<=kk){
            //o=0;
        for(k=i;k<=j;k++){ a[l]=d[k];// if(g[d[k]-97]=='0'){o++;}
         l++;} a[l]='\0';l++;
         ss.insert(a);
      //  cout<<a<<"  "<<o<<"";
        //if(o<=kk)
            {
           // if( m[a]==0){aa++;//cout<<"new";}
      // m[a]++;
       }
        //cout<<"\n";

         }




       }


    }
   cout<<ss.size()<<"\n";

    return 0;
}


