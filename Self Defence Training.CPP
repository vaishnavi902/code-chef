/*There are N women in a village, and their ages are given. A woman is eligible for self-defense training if her age is between 10 and 60 years (inclusive). 
Find the number of eligible women for each test case.
input----
3
3
15 23 65        O/P ----> 2
3
15 62 16        O/P -----> 2
2
35 9            O/P -----> 1      */
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int count = 0;
        for(int i = 0; i <N ; i++){
            int age;
            cin >> age;
            if(age>=10 && age<=60){
                count++;
            }
        }
        cout<<count << endl;
    }
    return 0;
}
