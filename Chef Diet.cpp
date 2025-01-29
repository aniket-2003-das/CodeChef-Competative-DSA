#include <bits/stdc++.h>
using namespace std;

void Paa() {
    int N, K;
    cin>>N>>K;
    vector<int> v(N, 0);
    
    for(int i=0; i<N; i++){
        int num;
        cin>>num;
        v[i]=num;
    }
    
    int day = 1;
    for(int i=0; i<N; i++){
        if(v[i]>=K) {
            if(i==N-1) {
                cout<<"YES"<<endl;
                break;
            }
            v[i+1]+=v[i]-K;
            day++;
        }
        else{
            cout<<"NO"<<" "<<to_string(day)<<endl;
            break;
        }
    }
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
}
