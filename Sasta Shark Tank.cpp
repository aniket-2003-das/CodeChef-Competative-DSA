#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int A, B;
    cin>>A>>B;
    if(2*A>B) cout<<"FIRST"<<endl;
    else if(2*A<B) cout<<"SECOND"<<endl;
    else cout<<"ANY"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
