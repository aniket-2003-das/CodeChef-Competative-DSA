#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N;
    cin>>N;
    cout<<4*(N/5) + N%5<<endl;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();
}
