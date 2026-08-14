// iteratieve all combination without changing order
/*
0 1
0 2
0 3
...
0 8
0 1 2
0 1 3
0 1 4
...
0 1 8
0 2 8
...
0 7 9
1 7 8
...
6 7 9
0 1 2 3
.......
.......
0 1 2 3 4 5 6 7 8



*/

#include<bits/stdc++.h>
using namespace std;
int pp(int n){

  int i,j,k,l;
  //cout<<n<<"\n";
  k=1;
  j=sqrt(n);
  for(i=2;i<=j;i++){if(n%i==0){k=0;break;}}

  return k;

}
int main()
{
    int a[10],i,j,k,l,m,n,o,p,t,x,y,z;
    string s;

    cin>>t;

    while(t--)
    {
        cin>>s;


        a[0]=0;a[1]=1;
        k=2;
        m=0;
        x=0;
        y=0;
        while(true)
        {  x=0;

          // to see
          // for(i=0;i<k;i++){ cout<<a[i]<<" "; } cout<<"\n";
         x=0;
            for(i=0;i<k;i++){ //cout<<s[a[i]]-48<<" ";;
            x=x*10+(s[a[i]]-48);  }  if(pp(x)==1){ y=1 ;cout<<x<<"\n";break; } //cout<<"\n";


            // this is the main part
           if(a[0]==8-k+1){k++; m=0; if(k==10){break;} for(i=0;i<k;i++){a[i]=i;} }

           else{

              if( a[k-1-m]==8-m){m++;}
              a[k-1-m]++;


           }

        }


       if(y==0){cout<<"-1\n";}
       //else{ cout<<"NO\n"; }
    }

    return 0;
}
