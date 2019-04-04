#include <bits/stdc++.h>
using namespace std;

int findNRCS(string input) {
	int j, current_start = 0, current_length, max_length = 0;
	int start;
	map<char, int> m;
	m[input[0]] = 0;

	for (j = 1; j < input.length(); j++) {
		if (m.find(input[j]) == m.end())
			m[input[j]] = j;
		else {
			if (m[input[j]] >= current_start) {
              	current_length = j - current_start;
				if (max_length < current_length) {
					max_length = current_length;
					start = current_start;
				}
              	current_start = m[input[j]] + 1;
			}
			m[input[j]] = j;
		}
	}

	if (max_length < j - current_start) {
		max_length = j - current_start;
		start = current_start;
	}
	return (max_length - start);
}

int main() {
	string input;
	cin >> input;
	cout << findNRCS(input);
	return 0;
}
