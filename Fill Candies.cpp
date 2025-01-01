#include <bits/stdc++.h>
using namespace std;

void Paa(){
    double N, M, K;
    cin>>N>>M>>K;
    // double ans = static_cast<double> (N)/(K*M);
    cout<<ceil(N/(K*M))<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
