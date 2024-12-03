#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y, Z;
    cin>>X;
    cin>>Y;
    cin>>Z;
    if(X*Y-Z>=Z) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
