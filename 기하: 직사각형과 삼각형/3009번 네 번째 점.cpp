#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> v;
    vector<int> sol_x;
    vector<int> sol_y;
    for (int i = 0; i < 3; i++) {
        int x, y;
        cin >> x >> y;

        int find_x = 0;
        int find_y = 0;

        for (int j = 0; j < sol_x.size(); j++) {
            if (sol_x[j] == x) {
                sol_x.erase(sol_x.begin() + j);
                find_x = 1;
            }
        }

        for (int j=0; j<sol_y.size(); j++) {
            if (sol_y[j] == y) {
                sol_y.erase(sol_y.begin() + j);
                find_y = 1;
            }
        }

        if (!find_x) sol_x.push_back(x);
        if (!find_y) sol_y.push_back(y);
    }

    cout << sol_x[0] << " " << sol_y[0];
}
