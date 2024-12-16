#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N, X, Y;
    cin>>N>>X>>Y;
    if(Y%X==0 && N*X>=Y) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
