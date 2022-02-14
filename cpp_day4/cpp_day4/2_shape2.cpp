// 2_shape1 - 152 page

#include <iostream>
#include <vector>

// 1. �簢�� ���� �� ��ǥ 4�� �޴� �ͺ���, ��ǥ �ΰ��� ������ �ǵ���
// ��� ������ Ÿ������ �����ϸ� ���ϴ�.

// 2. ������ ��� Ŭ������ �ִٸ� ��� ������ ��� ������ �� �ִ�.
// class Shape ����� �� Ŭ���� �ڿ� : public Shape �߰�(���)
class Shape {

};

class Rect : public Shape {
	//int x, y, v, h; // ���������
public:
	// Rect(); // ������
	void draw() { std::cout << "Draw Rect" << std::endl; }
};

class Circle : public Shape {
public:
	void draw() { std::cout << "Draw Circle" << std::endl; }
};

int main() {

	std::vector<Shape*> v;

	while (1) {
		int cmd;
		std::cin >> cmd;

		if (cmd == 1) {
			int n = 0;
			// �簢�� ����
			Rect rc; // �� {}(if ��) ����� �ٷ� �ı���.
			Rect* p = new Rect; // �̷��� �ϸ� ���� ����(delete)�ϱ� �������� ��� ��� ����.
								// ������ p ��ü�� �������� �̹Ƿ� ���� {} ����� �ı��ȴ�.
								// �׷���, p�� �ı��Ǳ� ���� ������ Rect �ּҸ� vector�� ����
			v.push_back(p);		// main �Լ� ���������� ��ȿ
		} // n�� �ı��ȴ�.
		else if (cmd == 2) {
			v.push_back(new Circle); // �� �ڵ�� �̷��Ե� ���� ����
		}
	}

}