#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int W;
    vector<int> arr(3, 0);
    cin>>W>>arr[0]>>arr[1]>>arr[2];
    // sort(arr.begin(), arr.end());
    if(arr[0]==W || arr[1]==W || arr[2]==W) cout<<"YES"<<endl;
    else if(arr[0]+arr[1]==W) cout<<"YES"<<endl;
    else if(arr[1]+arr[2]==W) cout<<"YES"<<endl;
    else if(arr[0]+arr[2]==W) cout<<"YES"<<endl;
    else if(arr[0]+arr[1]+arr[2]==W) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
