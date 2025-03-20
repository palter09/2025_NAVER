#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	string n;
	int b;

	cin >> n >> b;

	int sol = 0;

	for (int i = 0; i < n.size(); i++) {
		char ch = n[n.size() - 1 - i];

		if ('0' <= ch && ch <= '9') {
			sol += (ch - '0') * pow(b, i);
		}
		else {
			sol += (ch - 'A' + 10) * pow(b, i); // char 형 변수에 'A'를 빼면 숫자가 나온다.
		}
	}
	cout << sol;
}
