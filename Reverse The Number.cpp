#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int A;
    cin>>A;
    int X=0;
    while(A){
        X+=A%10;
        X*=10;
        A/=10;
    }
    cout<<X/10<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
