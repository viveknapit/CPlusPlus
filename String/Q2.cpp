//form the biggest number from the numeric string

#include<bits/stdc++.h>
using namespace std;
int main(){
    string s = "48565565432";
    sort(s.begin(), s.end(), greater<int>());
    cout<<s<<endl;
    return 0;
}