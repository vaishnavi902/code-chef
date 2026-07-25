/*Chef has an object weighing **W** units and three weights of **X**, **Y**, and **Z** units. He can use **one or more** of these weights together.
Print **"Yes"** if he can measure exactly **W** units; otherwise, print **"No"*
I/P ----
20 8 10 12        O/P ------> YES
20 10 11 12       O/P -------> NO*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int W , X, Y ,Z;
	    cin >> W >> X>>Y >> Z;
	    
	    if (W == X || W == Y || W == Z ||
    W == X + Y || W == Y + Z || W == X + Z ||
    W == X + Y + Z){
	        cout << "Yes" << endl;
	    }else{
	        cout << "No" <<endl;
	    }
	}
return 0;
}

