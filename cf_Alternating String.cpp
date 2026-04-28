#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],l,k,i,j,m,n,o,p,t;
    string q,ans[100];
   // FILE *F1;
    //F1=freopen("lab1a.txt","r",stdin);
    cin>>t;
   for(j=0;j<t;j++)
    {
       // cin>>n;
        cin>>q;
        n=q.size();
        m=l=p=0;
        //count frequency of each group
        for(i=0;i<n;i++){
            if(q[i]==q[p]){m++;}
            else{a[l]=m;m=1;l++;p=i;}
            if(i==n-1){a[l]=m;m=1;l++;p=i;}
        }
        //for(i=0;i<l;i++){ cout<<a[i]<<" "; } cout<<"\n";
        k=1;
        p=0;
        // if there are more than 2 group with more than frequency 2, or a group with more than 2 frequency
        for(i=0;i<l;i++){ if(a[i]>=3||p>=3){k=0; break;} if(a[i]>1){p++;} }
         if(k==1){//cout<<"YES\n";
         ans[j]="YES";}
         else{//cout<<"NO\n";
         ans[j]="NO";}
    }
   // fclose(F1);
   // FILE *F2;
   // F2=freopen("lab1a_ans.txt","w",stdout);
    for(j=0;j<t;j++){
        cout<<ans[j]<<"\n";
    }
   // fclose(F2);
    return 0;
}
