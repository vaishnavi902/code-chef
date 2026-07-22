/*Chef has N candies and wants to store them in bags. Each bag has K pockets, and each pocket can hold at most M candies, so one bag can hold K × M candies. Find the minimum number of bags needed to store all the candies.
input ----
6 2 3     O/P ---- 1
8 4 1     O/P ----- 2
25 4 2     O/P ----- 4 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N , K, M;
	    cin >> N >> K >> M;
	    
	    int bag = 1;
	    int S = N / (K * M);
	    int Y = N % (K * M);
	    if(Y == 0){
	        cout << S  << endl;
	    }else{
	        cout<< S + bag <<endl;
	    }
	}
return 0;
}
