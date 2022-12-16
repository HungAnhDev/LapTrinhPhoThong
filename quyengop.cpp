#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int n;
vector<int> a;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        a.push_back(x);
    }
    
    sort(a.begin(), a.end());
    cout << n - (lower_bound(a.begin(), a.end(), a[n - 1]) - a.begin()) << "\n";
    cout << a[n - 1];
}
