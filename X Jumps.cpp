#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y;
    cin>>X>>Y;
    if(X%Y==0) cout<<X/Y<<endl;
    else cout<<(X/Y) + (X-(X/Y)*Y)<<endl;
    
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
