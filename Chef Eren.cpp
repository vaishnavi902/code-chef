/*There are N episodes in the last season. Every odd-numbered episode is B minutes long, and every even-numbered episode is A minutes long. Find the total duration of all the episodes.
  input ----
  1 2 2        O/P ------>  2
  2 3 4        O/P  ------> 7    */
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N , A , B;
	    cin >> N >> A >> B;
	    int odd = (N + 1) / 2;
	    int even  = N / 2;
	    int total = (odd * B) + (even * A);
	    cout << total << endl;
	}
return 0;
}

