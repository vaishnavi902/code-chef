/*All of Chef's friends are playing fantasy cricket based upon the ODI World Cup. Chef has selected an 11-player team but needs to choose a captain and a vice-captain. He has narrowed his choice down to N players. How many different choices does he have?
INPUT
2         O/P ----> 2
3         O/P -----> 6 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
		int T;
	    cin >> T;
	    while(T--){
	        int N;
	        cin >> N;
	        int total = N * (N-1);
	        cout << total <<endl;
	    }
	return 0;
}
