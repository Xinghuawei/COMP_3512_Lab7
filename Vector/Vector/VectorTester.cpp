#include "Vector.h"
#include <iostream>

using namespace std;
int main() {

	Vector s;
	std::vector<int> v{ 1,2,3,4,5,6,7,8,9,10 };
	
	
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	cout << s.sum(v) << endl;
	cout << s.max(v) << endl;
	cout << s.min(v) << endl;
	cout << s.average(v) << endl;
	system("pause");
	return 0;

}