#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int A, B;
    cin>>A>>B;
    if(21-(A+B)<1 ||21-(A+B)>10) cout<<-1<<endl;
    else cout<<21-(A+B)<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
