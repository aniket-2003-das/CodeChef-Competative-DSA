#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y, Z;
    cin>>X>>Y>>Z;
    if(X%3==0) cout<<X*Y + Z*((X-1)/3)<<endl;
    else cout<<X*Y + Z*(X/3)<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
