#include <bits/stdc++.h>
using namespace std;

void Paa(){
    double X, N;
    cin>>N;
    cin>>X;
    double frac = N/X;
    if(frac>2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();
}
