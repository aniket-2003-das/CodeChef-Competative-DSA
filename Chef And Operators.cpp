#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int A, B;
    cin>>A>>B;
    if(A>B) cout<<">"<<endl;
    else if(A<B) cout<<"<"<<endl;
    else cout<<"="<<endl;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();

}
