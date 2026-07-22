/*Chef has already drawn two numbers, A and B, in a Blackjack game.
Find the third number (between 1 and 10) so that the total becomes 21.
If no such number exists, print -1.
input ----
1 10     o/p ---- 10
1 5      o/p ----- -1*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--){
	    int A , B;
	    cin >> A >> B;
	    int C;
	    int ans  = 21;
	    
	     C = ans -(A+B);
	     if(C>0 && C <= 10){
	         cout << C <<endl;
	     }
	     else{
	         cout<< -1 <<endl;
	     }
	}
return 0;
}
