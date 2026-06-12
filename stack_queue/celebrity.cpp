#include <iostream>
#include <stack>
using namespace std;

int celebrity(int mat[][100], int n) {
    stack<int> s;

    for (int i = 0; i < n; i++) {
        s.push(i);
    }

    while (s.size() > 1) {
        int i = s.top();
        s.pop();

        int j = s.top();
        s.pop();

        if (mat[i][j] == 0) {
            s.push(i);
        } else {
            s.push(j);
        }
    }

    int celeb = s.top();

    for (int i = 0; i < n; i++) {
        if (i != celeb &&
            (mat[i][celeb] == 0 || mat[celeb][i] == 1)) {
            return -1;
        }
    }

    return celeb;
}

int main() {
    int n;
    cin >> n;

    int mat[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    int ans = celebrity(mat, n);

    if (ans == -1)
        cout << "No Celebrity";
    else
        cout << "Celebrity is person " << ans;

    return 0;
}