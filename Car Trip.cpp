#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X;
    cin>>X;
    if(X<=300) cout<<3000<<endl;
    else cout<<X*10<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
