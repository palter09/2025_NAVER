#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<vector<string>> v(5, vector<string>(15, ""));

	for (int i = 0; i < 5; i++) {
		string s;
		cin >> s;

		for (int j = 0; j < s.size(); j++) {
			v[i][j] = s[j];
		}

	}
	
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			cout << v[j][i]; // 비어있어서 출력해도 아무것도 출력 안됨
		}
	}
}
