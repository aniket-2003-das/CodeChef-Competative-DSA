#include <bits/stdc++.h>
using namespace std;

void Paa(){
    double X, N;
    cin>>X>>N;
    if((N-100*X)>0) cout<<ceil((N-100*X)/100)<<endl;
    else cout<<0<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
