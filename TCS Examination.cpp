#include <bits/stdc++.h>
using namespace std;

void Paa() {
    int a, b, c, x, y, z;
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    if(a+b+c>x+y+z) cout<<"DRAGON"<<endl;
    else if(a+b+c<x+y+z) cout<<"SLOTH"<<endl;
    else {
        if(a>x) cout<<"DRAGON"<<endl;
        else if(x>a) cout<<"SLOTH"<<endl;
        else{
            if(b>y) cout<<"DRAGON"<<endl;
            else if(y>b) cout<<"SLOTH"<<endl;
            else {
                if(c>z) cout<<"DRAGON"<<endl;
                else if(z>c) cout<<"SLOTH"<<endl;
                else cout<<"TIE"<<endl;
            }
        }
    }
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
