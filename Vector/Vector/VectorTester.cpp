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
	
	//first vector test start
	//vector with size larger than 1
	cout << "First vector is: " << endl;
	cout << "[ ";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << " ]";
	cout << " " << endl;
	cout << "Sum: ";
	cout << s.sum(v) << endl;
	cout << "Max: ";
	cout << s.max(v) << endl;
	cout << "Min: ";
	cout << s.min(v) << endl;
	cout << "Average: ";
	cout << s.average(v) << endl;

	//second vector testing start
	//If the vector size is empty, everything return -1;
	cout<<"---------"<<endl;
	cout << "Second vector is a empty vector: " << endl;
	cout << "[ ";
	cout << " ]";
	cout << " " << endl;
	cout << "Sum: ";
	cout << s2.sum(v2) << endl;
	cout << "Max: ";
	cout << s2.max(v2) << endl;
	cout << "Min: ";
	cout << s2.min(v2) << endl;
	cout << "Average: ";
	cout << s2.average(v2) << endl;

	//third vector test start
	//vector with size of 1.
	cout << "---------" << endl;
	cout << "Third vector is: " << endl;
	cout << "[ ";
	cout << v3.at(0);
	cout << " ]";
	cout << " " << endl;
	cout << "Sum: ";
	cout << s3.sum(v3) << endl;
	cout << "Max: ";
	cout << s3.max(v3) << endl;
	cout << "Min: ";
	cout << s3.min(v3) << endl;
	cout << "Average: ";
	cout << s3.average(v3) << endl;

	system("pause");
	return 0;

}