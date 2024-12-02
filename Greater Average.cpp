#include <bits/stdc++.h>
using namespace std;

void Paa(){
    double A, B, C;
    cin>>A>>B>>C;
    if((A+B)/2>C) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
