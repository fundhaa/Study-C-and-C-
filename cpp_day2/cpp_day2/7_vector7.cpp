#include <iostream>

template<typename T>
class vector {
	T* ptr;
	int size;
public:
	vector(int sz) {
		size = sz;
		ptr = new T[sz]; // T로 type 변경
	}
	~vector() {
		delete[] ptr;
	}
	void resize(int newsize) {
		if (newsize > size) {
			T* temp = new T[newsize]; // T로 type 변경
			memcpy(temp, ptr, sizeof(T) * size); // T로 type 변경
			delete[] ptr;
			ptr = temp; 

		}
	}
	void setAt(int idx, T value) { // T로 type 변경
		ptr[idx] = value;

	}
	T getAt(int idx) { return ptr[idx]; } // T로 type 변경
};

int main() {
	vector<double> v(5); // 클래스 템플릿은 꼭 타입을 전달해야함.

	v.setAt(0, 10);
	v.setAt(1, 2.1); 

	v.resize(10); 
	std::cout << v.getAt(1) << std::endl; // 2.1

}

// vector라는 타입이 생겼으므로
// 크기가 변하는 배열이 필요할때 사용하면 된다.
// OOP : 타입을 만들어서 활용하자