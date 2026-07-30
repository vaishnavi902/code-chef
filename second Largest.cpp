/*Three numbers A, B and C are the inputs. Write a program to find second largest among them.
INPUT----
120 11 400        O/P ----> 120
10213 312 10      O/P ----> 312     */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int A,B, C;
        cin >> A >>B >>C;
        
        int middle = (A + B + C) - max({A,B,C}) - min({A,B,C});
        cout << middle << endl;
    }
    return 0;
}
