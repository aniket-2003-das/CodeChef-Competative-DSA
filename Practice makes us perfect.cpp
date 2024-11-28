#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int cnt=0;
	int a, b, c, d;
	cin>>a>>b>>c>>d;
	if(a>=10) cnt+=1;
	if(b>=10) cnt+=1;
	if(c>=10) cnt+=1;
	if(d>=10) cnt+=1;
	cout<<cnt<<endl;

}