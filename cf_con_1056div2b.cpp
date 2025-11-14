#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k,l,m,n,o,p;
    char a[100][100];
    cin>>t;
    while(t--)
    {

        cin>>n>>k;
        o=n*n-k;
        if(o==1){cout<<"NO\n";}
        else{
            cout<<"YES\n";
            for(i=0;i<n;i++){

                for(j=0;j<n;j++){

                    if(o>0){ if(i==0){ a[i][j]='L'; }else{  a[i][j]='U';}   o--;}
                    else{ a[i][j]='R'; }


                }

            }

            a[0][0]='R';

            for(i=0;i<n;i++){

                for(j=0;j<n;j++){

                    cout<<a[i][j];

                }
                cout<<"\n";
            }

        }


    }

    return 0;
}
