#include "Vector.h"

int Vector::sum(const std::vector<int>& v) {
	
	if (v.empty()) {
		return 0;
	} else {
		int sum{ 0 };
		for (int i = 0; i < v.size(); i++) {
			sum += v[i];
		}
		return sum;
	}
	
	
}

int Vector::max(const std::vector<int>& v) {
	
	if (v.empty()) {
		return 0;
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

int Vector::min(const std::vector<int>& v) {
	
	if (v.empty()) {
		return 0;
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

double Vector::average(const std::vector<int>& v) {
	
	
	if (v.empty()) {
		return 0;
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