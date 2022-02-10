#include <iostream>

template<typename T>
class vector {
	T* ptr;
	int size;
public:
	vector(int sz) {
		size = sz;
		ptr = new T[sz]; // T�� type ����
	}
	~vector() {
		delete[] ptr;
	}
	void resize(int newsize) {
		if (newsize > size) {
			T* temp = new T[newsize]; // T�� type ����
			memcpy(temp, ptr, sizeof(T) * size); // T�� type ����
			delete[] ptr;
			ptr = temp; 

		}
	}
	void setAt(int idx, T value) { // T�� type ����
		ptr[idx] = value;

	}
	T getAt(int idx) { return ptr[idx]; } // T�� type ����
};

int main() {
	vector<double> v(5); // Ŭ���� ���ø��� �� Ÿ���� �����ؾ���.

	v.setAt(0, 10);
	v.setAt(1, 2.1); 

	v.resize(10); 
	std::cout << v.getAt(1) << std::endl; // 2.1

}

// vector��� Ÿ���� �������Ƿ�
// ũ�Ⱑ ���ϴ� �迭�� �ʿ��Ҷ� ����ϸ� �ȴ�.
// OOP : Ÿ���� ���� Ȱ������