#pragma once
#include <vector>
class Vector {
private:
	int size;

public:


	int sum(const std::vector<int>&);

	int max(const std::vector<int>&);

	int min(const std::vector<int>&);

	double average(const std::vector<int>&);
};