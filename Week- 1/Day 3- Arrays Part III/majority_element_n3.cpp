#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> v, int n) {
    vector<int> ls;
    map<int, int> mpp;
    int mini= int(n/3)+1;

    for(int i=0; i<n; i++) {
        mpp[v[i]]++;

        if(mpp[v[i]] == mini) {
            ls.push_back(v[i]);
        }

        if(ls.size() == 2)
            break;
    }

    return ls;
}

int main() {
    vector<int> arr= {11, 33, 33, 11, 33, 11};
    vector<int> ans= majorityElement(arr, arr.size());

    cout<< "Majority elements: ";
    for(auto i: ans)
        cout<< i<< " ";
    
    return 0;
}
