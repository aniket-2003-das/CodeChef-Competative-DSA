#include <bits/stdc++.h>
using namespace std;

void Paa(){
    double A, B, K;
    cin>>A>>B>>K;
    cout<<ceil(abs(A-B)/K)<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
