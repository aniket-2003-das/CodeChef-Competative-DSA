#include <bits/stdc++.h>
using namespace std;

void Paa(){
    int X, Y, A, B;
    cin>>X>>Y>>A>>B;
    unordered_set<int> mySet;

    mySet.insert(X);
    mySet.insert(Y);
    mySet.insert({A, B});
    cout<<mySet.size() - 2<<endl;
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) Paa();
}
