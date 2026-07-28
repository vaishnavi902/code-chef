/*It is the World Cup Finals. Chef only finds a match interesting if the skill difference of the competing teams is less than or equal to D.
Given that the skills of the teams competing in the final are X and Y respectively, determine whether Chef will find the game interesting or not.,
input ---
5 3 4     O/P ----> YES
5 3 1     O/P ----> NO */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while (T--){
	    int X , Y, D;
	    cin >> X >> Y >> D;
	    if(abs(X-Y) <= D ){
	        cout<< "Yes" <<endl;
	    }else{
	        cout<< "No" <<endl;
	    }
	}
return 0;
}
