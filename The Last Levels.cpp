/*There are X levels remaining in the game, and each level takes Chef Y minutes to complete. To protect against eye strain, Chef also decides that 
every time he completes 3 levels, he will take a Z minute break from playing. Note that there is no need to take this break if the game has been completed..
4
2 12 10       O/P------  24
3 12 10       O/P------ 36  
7 20 8        O/P------ 156
24 45 15      O/P------ 1185 */
#include <bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	
	while(T--){
	   int X, Y, Z;
	   cin >> X >> Y >> Z;
	
	    int breaks = X / 3;
	    
	    if(X % 3 == 0){
	        breaks--;
	    }
	    if(breaks < 0){
	        breaks = 0;
	    }
	    cout << X * Y + breaks * Z <<endl;
	}
return 0;
}
