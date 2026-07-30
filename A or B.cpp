/*There are two problems in a contest. Problem A is worth 500 points at the start of the contest. Problem B is worth 1000 points at the start of the contest. Once the contest starts, after each minute: Maximum points of Problem A reduce by 2 points. Maximum points of Problem B reduce by 4 points. It is known that Chef requires X minutes to solve Problem A correctly and Y minutes to solve Problem B correctly. Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.
input-----
10 20         O/P ---> 1360
8 40          O/P ----> 1292    */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int A , B ;
	    cin >> A >> B;
	    int sum = A + B;
	    
	    int ans1 =(500 - (A * 2)) + (1000 - (sum*4));
	    int ans2 =(500 - (sum * 2)) + (1000 - (B*4));
	    
	    if(ans1 > ans2)
	        cout << ans1 << endl;
	   else
	        cout << ans2<<endl;
	}
return 0;
}
