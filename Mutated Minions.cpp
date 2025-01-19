#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N, K;
    cin>>N>>K;
    int count = 0;
    
    while(N--){
        int num;
        cin>>num;
        if((num+K)%7==0) count++;
    }
    cout<<count<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
