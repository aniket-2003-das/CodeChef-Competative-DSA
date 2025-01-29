#include <bits/stdc++.h>
using namespace std;

void Paa() {
    int N;
    cin>>N;
    unordered_map<int, int> myMap;
    bool isTrue=1;
    
    for(int i=0; i<2*N; i++){
        int num;
        cin>>num;
        myMap[num]++;
    }
    for(auto it: myMap) if(it.second>2) isTrue=0;
    if(isTrue) cout<<"Yes"<<endl;
    else if(!isTrue) cout<<"No"<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}