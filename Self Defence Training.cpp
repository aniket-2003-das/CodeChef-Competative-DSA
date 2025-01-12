#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N;
    int cnt=0;
    cin>>N;
    while(N--){
        int A;
        cin>>A;
        if(A<=60 && A>=10) cnt++;
    }
    cout<<cnt<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
