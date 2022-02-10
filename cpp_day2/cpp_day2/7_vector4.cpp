#include <iostream>

// ��ü�������α׷���(Object Oriented Programming , OOP)
// -> �ʿ��� Ÿ���� ���� ��������.

// "Point", "Rect", "Person" ���� �͸� ����°� �ƴ�.
// �پ��� ������ Ÿ���� �����ϴ� ��.

// ���� �迭(vector)�� Ÿ������ �����ϱ�

class vector {
	int* ptr;
	int size;
public:
	vector(int sz) {
		size = sz;
		ptr = new int[sz];
	}
	// �� Ŭ������ �����ڿ��� �ڿ��Ҵ�(�޸��Ҵ�)�� �ϰ� �ִ�
	// �� ��� ��κ� �Ҹ��ڸ� ���� �޸� ������ �ؾ��Ѵ�
	~vector() {
		delete[] ptr;
	}
};

int main() {
	vector v(5); // 5�� ¥�� ���� �迭
	v.resize(10);// 10���� ũ�� ����
}