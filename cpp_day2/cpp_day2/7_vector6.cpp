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
	void setAt(int idx, int value) {
		ptr[idx] = value;
		// 0 < idx= < size를 확인해서 에러처리 필요
	}
	int getAt(int idx) { return ptr[idx]; }
};

int main() {
	vector v(5);

	// 진짜 배열은 []로 접근하지만
	// 우리가 만든 것은 setAt(), getAt()으로 만들자.

	v.setAt(0, 10);
	v.setAt(1, 20); // v[1] = 20을 의미

	v.resize(10); // 크기 변경
	std::cout << v.getAt(1) << std::endl; // v[1] 출력
	
}
