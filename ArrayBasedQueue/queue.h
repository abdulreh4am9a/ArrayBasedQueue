#include<iostream>
using namespace std;
template<typename T>
class queue {
	int r, f, size;
	T* data;
public:
	queue(int s = 10) {
		size = s + 1;
		r = f = 0;
		data = new T[size];
	}
	~queue() {
		delete[]data;
	}
	void push(const T& val) {
		if (full())
			throw("Queue Overflow!");
		r = (r + 1) % size;
		data[r] = val;
	}
	void pop() {
		if (empty())
			throw("Queue Underflow!");
		f = (f + 1) % size;
	}
	T front() const {
		if (empty())
			throw("Queue is empty!");
		return data[(f + 1) % size];
	}
	bool empty() const {
		return r == f;
	}
	bool full() const {
		return (r + 1) % size == f;
	}
};