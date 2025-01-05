#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int P, Q;
    cin>>P>>Q;
    if((P+Q)%4==0 || (P+Q)%4==1) cout<<"Alice"<<endl;
    else if((P+Q)%4==2 || (P+Q)%4==3) cout<<"Bob"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
