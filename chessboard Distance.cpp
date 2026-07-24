/*The Chessboard Distance between two points **(X1, Y1)** and **(X2, Y2)** on a Cartesian plane is the larger of the two absolute differences: the difference in their x-coordinates or the difference in their y-coordinates. 
In other words, it is calculated as **max(|X1 − X2|, |Y1 − Y2|)**.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X1 , Y1, X2 ,Y2;
	    cin >> X1 >> Y1 >> X2 >> Y2;
	    
	    int ans;
	    int dx = abs(X1 - X2);
	    int dy = abs(Y1 - Y2);
	    cout << max(dx , dy) <<endl;
	}
return 0;
}
