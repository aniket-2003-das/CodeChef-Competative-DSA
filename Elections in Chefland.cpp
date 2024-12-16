#include <bits/stdc++.h>
using namespace std;

void Paa(int N, int X){
    vector<int> vec(N, 0);
    int i=0;
    int cnt=0;
    while(N--){
        cin>>vec[i];
        if(vec[i]>=X) cnt++;
        i++;
    }
    cout<<cnt<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) {
        int N, X;
        cin>>N>>X;
        Paa(N, X);
    }
}