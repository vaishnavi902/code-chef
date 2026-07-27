/*An airline has **X planes**, and each plane can carry **100 passengers**. There are **N passengers** who need to travel. Find the **minimum number
of new planes** the airline must buy so that all passengers can be accommodated.
input ---
4 600       O/P ----> 2
3 523       O/P -----> 3
8 245       O/P -----> 0 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X , N , A, B, ans;
	    cin >> X >> N;
	    
	    A = N/100;
	    B =  N % 100;
	    if(B != 0){
	        ans =(A-X) +1 ;
	    }else{
	        ans = A-X;
	    }if(ans <=0){
	        cout << 0 <<endl;
	    }else{
	        cout << ans <<endl;
	    }
	}
return 0;
}

