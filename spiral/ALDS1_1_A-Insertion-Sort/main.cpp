#include <iostream>
using namespace std;

static const int MAX = 100;

int main() {
    int A[MAX], n;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];

    int v = -1;
    int j = 0;

    for (int i = 0; i < n; i++) {
        v = A[i];
        j = i - 1;
        while (0 <= j && v < A[j]) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = v;

        for (int k = 0; k < n; k++) {
            cout << A[k];
            if (k == n - 1) {
                cout << endl;
            } else {
                cout << " ";
            }
        }
    }

    return 0;
}