#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int A, B, C;
    cin>>A>>B>>C;
    int s=A+B+C;
    cout<<s-max({A, B, C})-min({A, B, C})<<endl; 
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
