#include <iostream>
#include <numeric>
using namespace std;

int gcd(int a, int b) {
	// Find Minimum of a and b
    int res = min(a, b);

  	// Testing divisiblity with all numbers starting from
	// min(a, b) to 1

    while (res > 1) {

        // If any number divide both a and b, so we
        // got the answer
        if (a % res == 0 && b % res == 0)
            break;
        res--;
    }
	return res;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b;
        cin >> a >> b;
        if(a==b) cout << "0 0" << endl;
        else{
            long long e1 = (a>b)? a-b : b-a ;
            long long min_moves = min(a,b);
            long long count = 0;
            do{
                a++;
                b++;
                count++;
            } while(gcd(a,b)==);
            if(min_moves<count){ 
                cout << e1 << " " << min_moves << endl;
            }
            else {
                cout << gcd(a,b) << " " << count << endl;
            }
        }
    }
    return 0;
}