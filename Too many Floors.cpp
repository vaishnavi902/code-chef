/*A hotel has 10 rooms per floor (Floor 1: 1–10, Floor 2: 11–20, etc.). Given Chef's room \(X\) and Chefina's room \(Y\), find the number of floors Chef must travel to reach her.Input/Output: First line is \(T\) (test cases); each testcase has integers \(X\) and \(Y\). 
Output the absolute difference between their floors.
INput ----
1 100       O/P ----> 9
42 50       O/P -----> 0 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    
	    int A = X/10;
	    int B = X % 10;
	    if(B != 0 ){
	        A++;
	    }else{
	        A;
	        
	    }
	    int C = Y/10;
	    int D = Y % 10;
	    if(D != 0 ){
	        C++;
	    }else{
	        C;
	        
	    }
	    cout << abs(A-C) <<endl;
	}
}
