#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int A, B, C, D;
    cin>>A>>B>>C>>D;
    cout<<max(A, B)+max(C, D)<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
