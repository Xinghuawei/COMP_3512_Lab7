#include "Vector.h"
#include <iostream>

using namespace std;
int main() {

	vector<int> v(11);

	for (int i = 0; i < v.size(); i++) {
		v[i] = i;
	}

	for (int i = 0; i < v.size(); i++) {
		cout<< v[i] << endl;
	}

	v.sum();
	system("pause");
	return 0;

}