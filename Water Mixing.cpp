#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int A, B, X, Y;
    cin>>A>>B>>X>>Y;
    
    if(A>B){
        if(Y<A-B) cout<<"NO"<<endl; 
        else cout<<"YES"<<endl;
    }
    else if(B>A) {
        if(X<B-A) cout<<"NO"<<endl; 
        else cout<<"YES"<<endl;
    }
    else cout<<"YES"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
