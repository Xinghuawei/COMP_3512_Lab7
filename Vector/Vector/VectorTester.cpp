#include "Vector.h"
#include <iostream>

using namespace std;
int main() {

	Vector s;
	std::vector<int> v{ 0,5,4,6,800,67,3 };
	Vector s2;
	std::vector<int> v2;
	Vector s3;
	std::vector<int> v3{5};

	cout << s.sum(v) << endl;
	cout << s.max(v) << endl;
	cout << s.min(v) << endl;
	cout << s.average(v) << endl;

	cout<<"---------"<<endl;
	cout << s2.sum(v2) << endl;
	cout << s2.max(v2) << endl;
	cout << s2.min(v2) << endl;
	cout << s2.average(v2) << endl;

	cout << "---------" << endl;
	cout << s3.sum(v3) << endl;
	cout << s3.max(v3) << endl;
	cout << s3.min(v3) << endl;
	cout << s3.average(v3) << endl;

	system("pause");
	return 0;

}