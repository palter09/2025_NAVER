#include <iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string s;
	cin >> s;

	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	vector<int> num(26, -1);

	for (int i = 0; i < s.size(); i++) {
		for (int j = 0; j < alphabet.size(); j++) {
			if (s[i] == alphabet[j] && num[j] == -1) {
				num[j] = i;
			}
		}
	}

	for (int i = 0; i < alphabet.size(); i++) {
		cout << num[i] << " ";
	}
}
