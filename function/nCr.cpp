/*      calculate ncr
    nCr = n!
         ______
         (n-r)!*r!

*/
#include<iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    for(int i=2; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}


int main(){
    int n,r;
    cin>>n>>r;
    int ans = fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;

    return 0;
}