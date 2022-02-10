// 4_oop4 - 57 page ���� �������� �ణ �ٸ�
#include <iostream>

// OOP �ٽ� 3.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;

	int getArea() {
		return (right - left) * (bottom - top);
	}

	void draw() {
		std::cout << "draw rect" << std::endl;
	}
};

int main() {
	// "�޸� layout �̾߱�" - �����
	// Rect Ÿ�� ���� ������,
	// 1. ��� �����͸� ���� ���̰�
	// 2. ��� �Լ��� �ڵ� �޸𸮿� �Ѱ��� �����Ѵ�.

	Rect r1 = { 1, 1, 10, 10 };
	Rect r2 = { 2, 2, 10 ,10 };

	std::cout << sizeof(r1) << std::endl; // 16 bytes

	// ���� VS ��ü
	int n; // ����(variable) 
		   // premitive Ÿ���ϋ��� ������� �θ�
	Rect r; // ����� ���� ����
			// ��ü(Object)
			// �ܼ��� ���ϴ� ���� �ƴ϶� �׸����� �հ� ������ ���Ҽ� �ִ� ���� �����ϴ� �繰�� ��ü��� ��.
}