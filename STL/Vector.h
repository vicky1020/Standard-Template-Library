#pragma once
#include "pch.h"

template<typename T>
class vector {
	T* vec = nullptr;
	int size_v = 0;
	int capacity_v = 2;
	
	void realloc(int new_size) {
		T* new_vec = new T[new_size];
		for (int i = 0; i < size_v; i++) {
			new_vec[i] = vec[i];
		}
		delete[] vec;
		vec = new_vec; 
		capacity_v = new_size;
	}
public:
	vector() {
		realloc(capacity_v);
	}

	void push_back(T val) {
		if (size_v >= capacity_v) {
			realloc(size_v + size_v / 2);
		}
		vec[size_v] = val;
		size_v++;
	}

	const T& const operator[](int index) const {
		assert(index <= size_v, "Index out of range!");
		return vec[index];
	}

	T& operator[](int index) {
		assert(index <= size_v, "Index out of range!");
		return vec[index];
	}

	int size() {
		return size_v;
	}
};