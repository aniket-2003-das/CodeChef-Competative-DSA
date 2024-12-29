#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N, M;
    cin>>N>>M;
    if(N%M==0) {
        if((N/M)%2==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    else cout<<"No"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
