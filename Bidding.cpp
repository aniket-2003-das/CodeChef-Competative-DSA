#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int Alice, Bob, Charlie;
    cin>>Alice>>Bob>>Charlie;
    
    if(Alice==max({Alice,Bob,Charlie})) cout<<"Alice";
    else if(Bob==max({Alice,Bob,Charlie})) cout<<"Bob";
    else cout<<"Charlie";
    
    cout<<endl;
}

// void Paa(){
//     int A, B, C;
//     cin>>A>>B>>C;

//     vector<int> ans;
//     ans.push_back(A);
//     ans.push_back(B);
//     ans.push_back(C);
//     sort(ans.begin(), ans.end());
    
//     if(ans[2]==A) cout<<"Alice"<<endl;
//     if(ans[2]==B) cout<<"Bob"<<endl;
//     if(ans[2]==C) cout<<"Charlie"<<endl;
// }

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();
}
