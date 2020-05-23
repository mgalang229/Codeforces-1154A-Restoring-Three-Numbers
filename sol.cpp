#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int a[100], best = 0;
	for(int i = 0; i < 4; i++){
		cin >> a[i];
		best = max(best, a[i]);
	}
	int ans = 0;
	sort(a, a+4);
	for(int i = 0; i < 3; i++){
		ans = best-a[i];
		cout << ans << " ";
		ans = 0;
	}
	cout << "\n";
	return 0;
}
