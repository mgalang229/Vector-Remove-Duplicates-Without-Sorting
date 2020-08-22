#include <bits/stdc++.h>

using namespace std;

// Galang, Mark Jason T.
// 201910574

void remove_duplicates(vector<int> &v) {
	auto end = v.end();
	for(auto i = v.begin(); i != end; ++i) {
		end = std::remove(i + 1, end, *i);
	}
	v.erase(end, v.end());
}

void test_case() {
	vector<int> v = {5,2,6,5,7,8,7,9};
	remove_duplicates(v);
	for(auto x : v) cout << x << " ";
	cout << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	//int T;
	//cin >> T;
	//for(int nr = 1; nr <= T; ++nr) {
		//test_case(); 
	//}
	test_case();
	return 0;
}
