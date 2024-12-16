#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N;
    cin>>N;
    if(N%4==0) cout<<N/4<<endl;
    else cout<<N/4 + 1<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}