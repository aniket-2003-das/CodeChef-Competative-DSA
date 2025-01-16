#include <bits/stdc++.h>
using namespace std;

long long factorial(int n) {
    long long result = 1;
    for (int i=2; i<=n; i++) result*=i;
    return result;
}

long long nCm(int n, int m) {
    if (m>n) return 0;
    return factorial(n)/factorial(n-m);
}

void Paa(){
    int N;
    cin>>N;
    cout<<nCm(N, 2)<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
