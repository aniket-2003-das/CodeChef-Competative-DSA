#include <bits/stdc++.h>
using namespace std;

int abs1 = 0;
int abs2 = 0;
vector<pair<int, int>> vec;

void Paa(){
    int P1, P2;
    cin>>P1>>P2;
    abs1+=P1;
    abs2+=P2;
    int lead = abs(abs1 - abs2);
    int leader = (abs1 > abs2) ? 1 : 2;
    vec.push_back({lead, leader});
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) Paa();
    // Find the maximum lead
    auto max_lead = *max_element(vec.begin(), vec.end());
    cout<<max_lead.second<<" "<<max_lead.first<<endl;
    return 0;
}
