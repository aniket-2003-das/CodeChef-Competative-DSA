#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N, X;
    cin>>N>>X;
    if(X>=N && X%N==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
