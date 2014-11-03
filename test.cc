#include <iostream>
#include <string>

using namespace std;

int main(){
	int ceiling = 0;

	cerr << "Enter a Number to count to" << endl;
	cin >> ceiling;
	if(cin.fail() || ceiling <= 0){
		cerr << "Error" << endl;
	}
	else{
		// Count from 1 to ceiling
		for(int i = 1; i <= ceiling; i++){
			cout << i << endl;
		}
	}
}
