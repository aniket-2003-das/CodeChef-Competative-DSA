#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--){
	    int n; 
	    cin>>n;
	    string prime = "yes";
	    for(int i=2; i<n; i++) if(n%i==0) prime = "no";
	    if(n==1) prime = "no";
	    cout<<prime<<endl;
	}
}
