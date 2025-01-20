#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int N;
    cin>>N;
    vector<int> vec(N, 0);
    
    for (int i=0; i<N; ++i) cin>>vec[i];
    
    int degree=-1;
    for(int j=0; j<N; j++){
        if(vec[j]!=0) degree = j;
    }
    cout<<degree<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
