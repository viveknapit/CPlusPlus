#include <iostream>
using namespace std;

int main() {
	  int t;
	  cin>>t;
	  while(t--){
	      int n,k;
	      cin>>n>>k;
	      int a[n];
	      for(int i=0;i<n;i++){
	          cin>>a[i];
	          
	      }
	      
	      int ans = 0;
	      for(int i=1;i<n;i++){
	          if(i<=k){
	              ans += a[i];
	          }
	      }
	      cout<<ans<<endl;
	      
	  }
	return 0;
}
