#include<bits/stdc++.h>
int rec[100];

using namespace std;

//vector<int,int>rec(20,-1);

int fibonacci(int n)
{
   // if(  rec[n]!=-1 ){ return rec[n]; }
    //else if(  n<=1 ){ rec[n]=1; return 1; }
   // else{ rec[n]=fibonacci(n-1)+fibonacci(n-2); return fibonacci(n-1)+fibonacci(n-2); }

    if(n==1){return 1;}
    else if(n==0){ return 0; }
     else{ return fibonacci(n-1)+fibonacci(n-2); }
}


void fix()
{

    for(int i=0;i<50;i++){rec[i]=-1; }

}
void fix2()
{

    for(int i=0;i<50;i++){ cout<<rec[i]<<" ";}

}
int fibonacci2(int n)
{
   if(  rec[n]!=-1 ){return rec[n]; }
    else if(  n==1 ){ rec[n]=1; return 1; }
    else if(n==0){  rec[n]=0; return 0;}
   else{ rec[n]=fibonacci2(n-1)+fibonacci2(n-2); return fibonacci2(n-1)+fibonacci2(n-2); }


}

int main()
{
    int n;

fix();
    cin>>n;
    //n=30;
    //n=fibonacci(n);
    n=fibonacci2(n);
    cout<<n<<"\n";
//fix2();
    return 0;
}
