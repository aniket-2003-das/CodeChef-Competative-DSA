#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N;
    cin>>N;
    int sum=0;
    for(int i=0; i<N; i++){
        int input;
        cin>>input;
        sum+=input;
    }
    if(N%2==1) cout<<-1<<endl;
    else cout<<abs(sum/2)<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}