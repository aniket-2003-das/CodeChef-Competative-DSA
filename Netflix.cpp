#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int A, B, C, X;
    cin>>A>>B>>C>>X;
    if(X<=(A+B) || X<=(B+C) || X<=(C+A)) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
