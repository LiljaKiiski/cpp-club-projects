#include <iostream>

using namespace std;

bool number_is_odd(int num){
        if (num&1){ //Last digit is 1, so odd
                return true;
        }

        return false;
}

int main(){
	for (int x = 0; x < 10; x++){
		string is_odd = number_is_odd(x) ? "true" : "false";
		cout << x << " is odd: " << is_odd << endl;
	}

	return 0;
}