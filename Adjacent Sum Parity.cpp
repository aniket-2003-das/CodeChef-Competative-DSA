#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N;
    cin>>N;
    int sum=0;
    for(int i=1; i<=N; i++){
        int temp;
        cin>>temp;
        sum+=temp;
    }
    // Since each Ai appears twice, sum modulo 2 will be 0.
    if(sum%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
