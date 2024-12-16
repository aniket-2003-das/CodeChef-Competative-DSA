#include <bits/stdc++.h>
using namespace std;

void Paa(int N){
    vector<int> arr(N, 0);
    int cnt = 0;
    for(int i=0; i<N; i++){
        cin>>arr[i];
        if(arr[i]>=1000) cnt++;
    }
    cout<<cnt<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        Paa(N);
    }
}
