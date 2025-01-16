#include <bits/stdc++.h>
using namespace std;

void Paa(){
    vector<int> arr(4, 0);
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    // sort(arr.begin(), arr.end());
    if(arr[0]+arr[2]==180 && arr[1]+arr[3]==180) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}