#include "Vector.h"
#include <iostream>

using namespace std;
int main() {

	vector<int> v(12);
	
	
	
	for (int i = 0; i < v.size(); i++) {
		v[i] = i;
		cout << v[i] << endl;
	}

	system("pause");
	return 0;

}