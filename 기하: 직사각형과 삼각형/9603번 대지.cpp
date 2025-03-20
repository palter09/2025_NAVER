#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> v_x;
    vector<int> v_y;
    
    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        v_x.push_back(x);
        v_y.push_back(y);
    }
    sort(v_x.begin(), v_x.end());
    sort(v_y.begin(), v_y.end());

    int w = v_x[0] - v_x[N - 1];
    int h = v_y[0] - v_y[N - 1];

    cout << w * h;
}
