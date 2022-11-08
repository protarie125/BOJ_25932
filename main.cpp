#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < (n--)) {
		auto vec = vi(10);
		auto includingMack = bool{ false };
		auto includingZack = bool{ false };
		for (auto i = 0; i < 10; ++i) {
			cin >> vec[i];

			if (18 == vec[i]) {
				includingMack = true;
			}
			else if (17 == vec[i]) {
				includingZack = true;
			}
		}

		for (const auto& x : vec) {
			cout << x << ' ';
		}
		cout << '\n';

		if (!includingMack && !includingZack) {
			cout << "none\n\n";
		}
		else if (includingMack && !includingZack) {
			cout << "mack\n\n";
		}
		else if (!includingMack && includingZack) {
			cout << "zack\n\n";
		}
		else {
			cout << "both\n\n";
		}
	}

	return 0;
}