#include "Vector.h"
#include <iostream>

using namespace std;
int main() {

	Vector s;
	std::vector<int> v{ 0,5,4,6,800,67,3 };
	Vector s2;
	std::vector<int> v2;
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	cout << s.sum(v) << endl;
	cout << s.max(v) << endl;
	cout << s.min(v) << endl;
	cout << s.average(v) << endl;
	cout<<"---------"<<endl;
	cout << s2.sum(v2) << endl;
	cout << s2.max(v2) << endl;
	cout << s2.min(v2) << endl;
	cout << s2.average(v2) << endl;

	system("pause");
	return 0;

}