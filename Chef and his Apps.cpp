/*Chef's phone has a total storage of **S MB**, with two installed apps using **X MB** and **Y MB**. He wants to install a new app requiring
  **Z MB**. Find the **minimum number of installed apps** Chef must delete so that there is enough storage for the new app.
  input ----
10 1 2 3        o/p -----> 0
9 4 5 1         o/p ------> 1
15 5 10 15       o/p ------> 2  */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int S, X, Y, Z;
        cin >> S >> X >> Y >> Z;

        int freeMem = S - (X + Y);

        if (freeMem >= Z) {
            cout << 0 << endl;
        }
        else if (freeMem + X >= Z || freeMem + Y >= Z) {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }

    return 0;
}
