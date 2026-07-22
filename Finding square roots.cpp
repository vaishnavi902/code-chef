//1 method to solve
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T; 
    cin >> T;
    while(T--){
    
    int N; 
    cin >> N;
    int ans = 0;
    
    for (int i = 0; i <= N; i++){
        if (i*i <= N ){
            ans = i;
        }else {
            break;
        }
    }
    cout << ans << endl;
    }
    return 0;
}

//2nd method to solve 

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T; 
    cin >> T;
    while(T--){
    
    int N; 
    cin >> N;
   
    cout<< (int)sqrt(N)<< endl; 
    }
return 0; 
}
    

