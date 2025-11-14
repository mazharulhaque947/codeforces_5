
#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{

    char a[9][9];
    int n,i,k,l,j,m;
    cin>>n;
    i=0;
    while(n>=0){

        m=n%10;
        n=n/10;
        k=0;
        if(m>=5){ k=1; m=m-5; }
         a[i][1-k]='-';a[i][k]='O'; a[i][2]='|';
         //cout<<a[i][0]<<a[i][1]<<a[i][2]<<"\n";
         for(j=0;j<5;j++){ a[i][j+3]='O';  /*cout<<a[i][j+3];*/} //cout<<"\n";
        a[i][3+m]='-';
        // for(j=0;j<5;j++){  cout<<a[i][j+3];}// cout<<"\n";
         // for(j=0;j<5-m-1;j++){ a[i][3+j]='O'; }
         a[i][8]='\0';
i=i+1;
        if(n==0){break;}


    }
    for(j=0;j<i;j++){ cout<<a[j]<<"\n"; }

    return 0;
}
