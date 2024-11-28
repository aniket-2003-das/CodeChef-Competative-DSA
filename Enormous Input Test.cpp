#include <bits/stdc++.h>
using namespace std;

void Paa(int K, int &cnt) {
    int A;
    cin>>A;
    if(A%K==0) cnt+=1;
}

int main() {
    int N, K;
    int cnt = 0;
    cin>>N>>K;
    while(N--) Paa(K, cnt);
    cout<<cnt<<endl;
}