#include <iostream>

class vector {
	int* ptr;
	int size;
public:
	vector(int sz) {
		size = sz;
		ptr = new int[sz];
	}
	~vector() {
		delete[] ptr;
	}
	void resize(int newsize) {
		if (newsize > size) {
			int* temp = new int[newsize];
			memcpy(temp, ptr, sizeof(int) * size);
			delete[] ptr;
			ptr = temp; // 참고로 temp는 블럭안에 있는 지역변수라 알아서 사라짐.

		}
	}
};

int main() {
	vector v(5); // 5개 짜리 동적 배열
	v.resize(10);// 10개로 크기 변경
}
