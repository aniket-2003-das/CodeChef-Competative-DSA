#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	vector<int> ans(3);
	cin>>N;
	int i=0;
	while(N--) {
	    cin>>ans[0]>>ans[1]>>ans[2];
	    sort(ans.begin(), ans.end());
	    cout<<ans[1]<<endl;
	}
}
