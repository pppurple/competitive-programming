#include <iostream>
using namespace std;

main() {
    int j, v, N;
    int i = 0;
    int cnt = 0;
    int A[100];

    cin >> N;
    for (i = 0; i < N; i++) cin >> A[i];

    i = 0;
    while (i < N) {
        for (j = N - 1; j > i; j--) {
            if (A[j] < A[j - 1]) {
                v = A[j];
                A[j] = A[j - 1];
                A[j - 1] = v;
                cnt++;
            }
        }
        i++;
    }

    for (i = 0; i < N; i++) {
        cout << A[i];
        if (i != N - 1) {
            cout << " ";
        }
    }
    cout << endl << cnt << endl;
}