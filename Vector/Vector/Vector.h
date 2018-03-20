#pragma once
#include <vector>
class Vector {
private:
	int size;

public:
	Vector();

	Vector(int);

	int sum(const std::vector<int>&);

	int max(const std::vector<int>&);

	int min(const std::vector<int>&);

	double average(const std::vector<int>&);
};