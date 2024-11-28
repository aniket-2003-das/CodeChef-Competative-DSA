#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N;
    cin>>N;
    int sum = 0;
    while(N>0){
        int temp = N%10;
        sum+=temp;
        N/=10;
    }
    cout<<sum<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
