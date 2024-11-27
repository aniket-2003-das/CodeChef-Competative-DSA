#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int A, B, C, D;
    cin>>A>>B;
    cin>>C;
    cin>>D;
    if(A-C<B-D) cout<<"First"<<endl;
    else if(A-C>B-D) cout<<"Second"<<endl;
    else if(A-C==B-D) cout<<"Any"<<endl;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();
}
