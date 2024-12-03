#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int N;
    cin>>N;
    int cnt=0;
    vector<int> arr(N, 0);
    for(int i=0; i<N; i++){
        cin>>arr[i]; 
        if(arr[i]%2==0) cnt++;
    }
    // cout<<cnt<<endl;
    if(cnt>N-cnt) cout<<"READY FOR BATTLE"<<endl;
    else cout<<"NOT READY"<<endl;
}

