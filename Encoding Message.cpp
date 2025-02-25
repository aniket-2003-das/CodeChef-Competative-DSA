#include <bits/stdc++.h>
using namespace std;

string swapchar(string &S, int i, int j){
    swap(S[i], S[j]);
    return S;
}

void Paa(){
    int N;
    string S;
    cin>>N;
    cin>>S;
    for(int i=0; i<N-1; i+=2) swapchar(S, i, i+1);
    for(auto &it: S) it=char(219-int(it));
    cout<<S<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
