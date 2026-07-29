/*Given distance and time for Alice (A, X) and Bob (B, Y).
Calculate their speeds (Distance / Time) to see who is faster.
Output "Alice", "Bob", or "Equal" based on the faster speed.
Input----
20 6 20 5        O/P ----> Bob 
10 3 20 6        O/P -----> Equal */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        long long A, X, B, Y; // Using long long prevents integer overflow during multiplication
        cin >> A >> X >> B >> Y;
        
        // Cross-multiply instead of dividing
        if(A * Y > B * X){
            cout << "Alice" << endl;
        } else if(A * Y < B * X){
            cout << "Bob" << endl;
        } else {
            cout << "Equal" << endl;
        }
    }
    return 0;
}
