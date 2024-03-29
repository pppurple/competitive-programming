#include <algorithm>
#include <iostream>
using namespace std;

void bubbleSort(char Suit[], char Num[], int N) {
    for (int i = 0; i < N - 1; i++) {
        for (int j = N - 1; j > i; j--) {
            if (Num[j] < Num[j - 1]) {
                swap(Num[j], Num[j - 1]);
                swap(Suit[j], Suit[j - 1]);
            }
        }
    }
}

void selectionSort(char Suit[], char Num[], int N) {
    int j, minj;
    for (int i = 0; i < N - 1; i++) {
        minj = i;
        for (j = i; j < N; j++) {
            if (Num[j] < Num[minj]) {
                minj = j;
            }
        }
        if (Num[i] != Num[minj]) {
            swap(Num[i], Num[minj]);
            swap(Suit[i], Suit[minj]);
        }
    }
}

void print(char Suit[], char Num[], int N) {
    for (int i = 0; i < N; i++) {
        if (i) cout << " ";
        std::string str;
        str += Suit[i];
        str += Num[i];
        cout << str;
    }
    cout << endl;
}

bool compare(char S1[], char N1[], char S2[], char N2[], int N) {
    std::string s1;
    std::string s2;
    for (int i = 0; i < N; i++) {
        s1 += S1[i];
        s1 += N1[i];
        s2 += S2[i];
        s2 += N2[i];
    }
    if (s1 == s2) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int N;
    char Suit1[36];
    char Num1[36];
    char Suit2[36];
    char Num2[36];

    cin >> N;
    for (int i = 0; i < N; i++) cin >> Suit1[i] >> Num1[i];
    std::copy(std::begin(Suit1), std::end(Suit1), std::begin(Suit2));
    std::copy(std::begin(Num1), std::end(Num1), std::begin(Num2));

    bubbleSort(Suit1, Num1, N);
    selectionSort(Suit2, Num2, N);

    print(Suit1, Num1, N);
    cout << "Stable" << endl;
    print(Suit2, Num2, N);
    if (compare(Suit1, Num1, Suit2, Num2, N)) {
        cout << "Stable";
    } else {
        cout << "Not stable";
    }
    cout << endl;

    return 0;
}