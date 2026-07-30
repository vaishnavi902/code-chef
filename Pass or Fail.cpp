/*Chef will pass the exam if his total score from $3$ marks per correct answer and $-1$ mark per incorrect answer is at least $P$. Since he attempts all $N$ questions and gets $X$ correct, he gets $N - X$ questions wrong. Therefore, Chef passes if the calculated net score $4X - N$ is greater than or equal to $P$, and fails otherwise. [1, 2]
INPUT ----
5 2 3           O/P -----> PASS
5 2 4           O/P ------> FAIL  */

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N , X , P ,A ,B;
	    cin >> N >> X >> P;
	    
	    A = N - X;
	    B = (X * 3) - A;
	    if(P > B){
	        cout << "Fail" <<endl;
	    }else{
	        cout << "Pass" <<endl;
	    }
	}
return 0;
}
