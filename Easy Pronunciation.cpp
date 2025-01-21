#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N;
    string S;
    cin>>N;
    cin>>S;

    int cnt=0;
    for(int i=0; i<N; i++){
        if(S[i]=='a' || S[i]=='e' || S[i]=='i' || S[i]=='o' || S[i]=='u') cnt=0;
        else {
           cnt++;
           if(cnt>=4) break;
       }
    }
    if(cnt>=4) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
