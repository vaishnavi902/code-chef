/*Chef starts at stair 0 and wants to reach stair X. In one move, he can climb either Y stairs or 1 stair. Find the minimum number of moves required for Chef to reach exactly stair X
Input ----
4 2   ----->   2
8 3   ------>  4.*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	
	while(T--){
	    int X, Y;
	    cin >> X >> Y;
	    
	    int ans = 0 , a,b;
	    a = X % Y;
	    b = X / Y;
	    
	    ans += b + (a/1);
	    cout << ans << endl;
	}
return 0;
}

