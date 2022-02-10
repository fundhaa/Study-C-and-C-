// 4_oop2 - 57 page ���� �������� �ణ �ٸ�
#include <iostream>

// OOP �ٽ� 1. ���α׷����� �ʿ��� Ÿ���� ���� �����ؾ��Ѵ�.
//				�׸���, Ÿ���� ����ؼ� �ڵ带 �ۼ��ؾ��Ѵ�.

struct Rect
{
	int left;
	int top;
	int right;
	int bottom;
};

// �簢���� ������ ���ϴ� �Լ�
// ��ü�������α׷��� �������� �����Ѱ� �� ����������.

// ����� ���� Ÿ���� ���ڷ� ���� ��
// �б⸸ �Ѵٸ� "call by value(Rect r)" ��� "const reference(const Rect& r)" �� ����
// call by value�� �����ϸ� �� �Լ��� �������� int*4�� = 16byte�� ��� �����ϰ� �����̴�.
int getRectArea(const Rect& r) {
	return (r.right - r.left) * (r.bottom - r.top);
}

void drawRect(const Rect& r) {
	std::cout << "draw rect" << std::endl;
}

int main() {
	Rect r = { 1, 1, 10, 10 };
	int n = getRectArea(r);
	drawRect(r);
}