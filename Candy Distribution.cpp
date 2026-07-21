/*Chef has N candies. He has to distribute them to exactly M of his friends such that each friend gets equal number of candies and each friend gets even number of candies. Determine whether it is possible to do so.
NOTE: Chef will not take any candies himself and will distribute all the candies.*/

#include <bits/stdc++.h>
using namespace std;

int main() {

	int T;
	cin >> T;       //  test cases
	
	while(T--){
	    int N, M;
	    cin >> N >> M ;//N = Total Number Of Candies   M = his friend
	    
	    if(N % M == 0){
	        int c = N / M;
	        if(c%2 == 0){
	            cout<< "Yes" <<endl;
	        }else{
	            cout<< "No" <<endl;
	        }
	    }else{
	        cout<< "No" <<endl;
	    }
	 }
return 0;
}
