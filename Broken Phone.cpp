#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int A, B;
    cin>>A>>B;
    if(A<B) cout<<"REPAIR"<<endl;
    else if(A>B) cout<<"NEW PHONE"<<endl;
    else if(A==B) cout<<"Any"<<endl;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();
}
