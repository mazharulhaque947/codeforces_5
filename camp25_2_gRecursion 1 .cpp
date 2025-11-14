#include<bits/stdc++.h>

using namespace std;
long long factorial(long long n){
long long h,k;

if(n<=1){ return 1; }
else{ k=factorial(n-1);return n*k; }

}

int main()
{
    long long n;

    cin>>n;

    n=factorial(n);
    cout<<n<<"\n";

return 0;
}
