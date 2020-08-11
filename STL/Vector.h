#pragma once

template<typename T>
class vector {
	T* s;
	int size_a = 0;
	std::allocator<T> alloc;
public:
	vector() :s(alloc.allocate(1)) {

	}

	void push_back(T val) {
		s[size_a] = val;
		size_a++;
	}

	T operator[](int index) {
		if (index <= size_a) {
			return s[index];
		}
		else return NULL;
	}

	int size() {
		return size_a;
	}
};