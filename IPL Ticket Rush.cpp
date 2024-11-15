#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N, M;
    cin>>N>>M;
    
    int a = N-M;
    if(a>=0) cout<<a<<endl;
    else cout<<0<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
