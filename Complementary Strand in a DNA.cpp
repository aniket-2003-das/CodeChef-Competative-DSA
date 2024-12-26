#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N;
    string S;
    cin>>N;
    cin>>S;
    
    for(int i=0; i<N; i++){
        if(S[i]=='A') S[i]='T';
        else if(S[i]=='T') S[i]='A';
        else if(S[i]=='C') S[i]='G';
        else if (S[i]=='G') S[i]='C';
    }
    cout<<S<<endl;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();
}
