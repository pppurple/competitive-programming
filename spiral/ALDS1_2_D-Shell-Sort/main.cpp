#include <iostream>
using namespace std;

int insertionSort(int A[], int n, int g, int cnt) {
    for (int i = g; i < n; i++) {
        int v = A[i];
        int j = i - g;
        while (j >= 0 && A[j] > v) {
            A[j + g] = A[j];
            j = j - g;
            cnt++;
        }
        A[j + g] = v;
    }
    return cnt;
}

int shellSort(int A[], int n) {
    int cnt = 0;
    int m = 3;
    cout << m << endl;

    int G[] = {4, 3, 1};
    for (int i = 0; i < m; i++) {
        if (i) cout << " ";
        cout << G[i];
        cnt = insertionSort(A, n, G[i], cnt);
    }
    cout << endl;
    return cnt;
}

int main() {
    int n;
    cin >> n;
    int A[n];

    for (int i = 0; i < n; i++) cin >> A[i];

    int cnt = shellSort(A, n);
    cout << cnt << endl;

    for (int i = 0; i < n; i++) {
        cout << A[i] << endl;
    }

    return 0;
}