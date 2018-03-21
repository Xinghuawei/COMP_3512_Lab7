#include "Vector.h"

/*
Sum of the elements in the vector passed as a
parameter.
Precondition: if the vector is empty, return -1
Postcondition:Return the correct sum of elements in the vector;
*/
int Vector::sum(const std::vector<int>& v) {
	
	if (v.empty()) {
		return -1;
	} else {
		int sum{ 0 };
		for (int i = 0; i < v.size(); i++) {
			sum += v[i];
		}
		return sum;
	}
}

/*
Find the maximum of the elements in the vector passed as a
parameter.
Precondition: if the vector is empty, return -1
Postcondition:Return the correct max of elements in the vector
*/
int Vector::max(const std::vector<int>& v) {
	
	if (v.empty()) {
		return -1;
	} else {
		int largest = v[0];
		for (int i = 0; i < v.size(); i++) {
			if (v[i] > largest) {
				largest = v[i];
			}
		}
		return largest;
	}
}

/*
Find the minimum of the elements in the vector passed as a
parameter.
Precondition: if the vector is empty, return -1
Postcondition:Return the correct minimum of elements in the vector
*/
int Vector::min(const std::vector<int>& v) {
	
	if (v.empty()) {
		return -1;
	} else {
		int small = v[0];
		for (int i = 1; i < v.size(); i++) {
			if (v[i] < small) {
				small = v[i];
			}
		}
		return small;
	}

}

/*
Calculate average of the elements in the vector passed as a
parameter.
Precondition: if the vector is empty, return -1
Postcondition:Return the correct average of elements in the vector
*/
double Vector::average(const std::vector<int>& v) {
	
	
	if (v.empty()) {
		return -1;
	} else {
		double avg{ 0.0 };
		double sum{ 0.0 };
		for (int i = 0; i < v.size(); i++) {
			sum += v[i];
		}
		avg = sum / (double)v.size();
		return avg;
	}
}