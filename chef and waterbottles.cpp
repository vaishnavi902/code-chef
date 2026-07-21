/*Chef and Water Bottles
Chef has N empty bottles where each bottle has a capacity of X litres.There is a water tank in Chefland having K litres of water.Chef wants to fill the empty bottles using the water in the tank.
input: test cases---3
N=5 X=2 K=8    --> Output - 4
N=10 X=5 K=4    --->Output - 0
N=3 X=1 K=4      --> Output - 3
.*/

//1st approch :-
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;      //Test cases
	while(T--){
	
    int N;
    cin >> N;       //Number of Empty Bottles
    
    int X;
    cin >> X;        //Xis the number of liters of water
    
    int K;
    cin >> K;    // how much water in tank
    
    if( X > K){             ////if required liter is more than tank amount of water
        cout<< 0 <<endl;
    }
        
    else{
        if(K/X >= N){
            cout << N <<endl;
        }
        else{
            cout << K/X << endl;
        }
    }
	}
    cout << endl;
    return 0;
}




//2nd approch easiest :--
#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;

    while(T--) {

        int N, X, K;
        cin >> N >> X >> K;

        cout << min(N, K / X) << endl;
    }
    return 0;
}
  
