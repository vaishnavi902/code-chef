/*Chef has X litres of hot water and Y litres of cold water. The initial water temperature is A°C. Find whether Chef can make the water temperature exactly B°C by adding the available hot and cold water.
  input:---
  1
30 35 6 2      ----> o/p  YES  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	
	while(T--){
	    int A , B, X, Y;
	    cin >> A >> B >> X >> Y;
	    
	    if( A < B){
	        int rem = B-A;
	        if(rem <= X){
	            cout<<"Yes"<< endl;
	        }else{
	            cout<<"No" << endl;
	        }
	    }else if(A > B){
	        int rem = A - B;
	        if(rem <= Y){
	            cout<< "Yes" <<endl;
	        }else{
	            cout<<"No" << endl;
	        }
	    }else{
	        cout << "Yes" <<endl;
	    }
	}
return 0;
}
