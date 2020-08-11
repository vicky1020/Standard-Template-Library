#include<iostream>
#include"..\STL\Vector.h"

int main() {
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	for (int i = 0; i < vec.size(); i++) {
		std::cout<<vec[i]<<std::endl;
	}
}