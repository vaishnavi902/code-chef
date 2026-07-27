/*Chef has an unlimited number of ₹5 and ₹10 coins. He needs to pay exactly X rupees using the minimum number of coins. If it is not possible to make exactly X rupees using only these coins, print -1.
  input
50      O/P -----> 5
15      O/P -----> 2
8       O/P ------> -1 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X;
	    cin >> X;
	    if (X % 5 != 0) {
            cout <<-1 << endl;
	    }else{
	        int total = X/10 + (X%10)/5 ;
	        cout<< total << endl;
	    }
	}
return 0;
}
