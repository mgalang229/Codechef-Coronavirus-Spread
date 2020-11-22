#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int x[n];
		for(int i=0; i<n; ++i)
			cin >> x[i];
		int mn=INT_MAX, mx=0, tmp=0;
		for(int i=0; i<n; ++i) {
			if(i&&x[i]-x[i-1]>2)
				tmp=i;
			if(i+1==n||x[i+1]-x[i]>2) {
				int cur=i-tmp+1;
				if(cur<mn)
					mn=cur;
				if(cur>mx)
					mx=cur;
			}
		}
		cout << mn << " " << mx << "\n";
	}
}
