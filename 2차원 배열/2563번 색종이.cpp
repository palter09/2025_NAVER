#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<vector<int>> arr(101, vector<int>(101, 0));
	int sol = 0;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;

		for (int j = a; j < a + 10; j++) {
			for (int k = b; k < b + 10; k++) {
				arr[j][k] = 1; // 색종이 부분을 1로 바꾸고, 1인 부분 합하기
			}
		}
	}

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (arr[i][j] == 1) {
				sol += 1;
			}
		}
	}

	cout << sol;
}
