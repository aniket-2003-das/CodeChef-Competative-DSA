#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string input;
	cin>>input;
	
	// Iterator at first character.
    auto it = input.begin();  
    advance(it, 6); // Moved to 7th character
    cout<<*it<<endl;
    return 0;
}
