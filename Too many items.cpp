#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N;
    cin>>N;
    if(N%10==0) cout<<N/10<<endl;
    else cout<<N/10 + 1<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}