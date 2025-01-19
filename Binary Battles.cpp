#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N, A, B;
    cin>>N>>A>>B;
    
    N = log(N)/log(2);
    cout<<(A+B)*(N-1) + A<<endl;
    
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}