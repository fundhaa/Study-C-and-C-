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
	void setAt(int idx, int value) {
		ptr[idx] = value;
		// 0 < idx= < size�� Ȯ���ؼ� ����ó�� �ʿ�
	}
	int getAt(int idx) { return ptr[idx]; }
};

int main() {
	vector v(5);

	// ��¥ �迭�� []�� ����������
	// �츮�� ���� ���� setAt(), getAt()���� ������.

	v.setAt(0, 10);
	v.setAt(1, 20); // v[1] = 20�� �ǹ�

	v.resize(10); // ũ�� ����
	std::cout << v.getAt(1) << std::endl; // v[1] ���
	
}
