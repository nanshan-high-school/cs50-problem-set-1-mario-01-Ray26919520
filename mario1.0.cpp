#include <iostream>
using namespace std;
int main() {
    int i,j,hashtag,space;
    do {
        cout << "高?" << "\n";
        cin >> j;
    } while (j > 8 || j <= 0);

    for (i = 0; i <= j; i++) {
        for (space = j;space > i;space--) {
            cout << " ";
        }
        for (hashtag = 1; hashtag <= i; hashtag++) {
            cout << "#";
        }
    cout << "\n";
    }
}
