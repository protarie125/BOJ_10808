#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s;
	cin >> s;

	auto lst = vector<int>(26, 0);
	for (const auto& c : s) {
		lst[c - 'a'] += 1;
	}

	for (const auto& x : lst) {
		cout << x << ' ';
	}

	return 0;
}