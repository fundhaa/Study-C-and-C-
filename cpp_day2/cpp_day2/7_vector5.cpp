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
			ptr = temp; // ����� temp�� ���ȿ� �ִ� ���������� �˾Ƽ� �����.

		}
	}
};

int main() {
	vector v(5); // 5�� ¥�� ���� �迭
	v.resize(10);// 10���� ũ�� ����
}
