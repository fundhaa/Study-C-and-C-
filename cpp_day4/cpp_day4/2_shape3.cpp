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
			Rect rc; 
			Rect* p = new Rect;
			v.push_back(p);	
		} 
		else if (cmd == 2) {
			v.push_back(new Circle); 
		}
		else if (cmd == 9) {
			for (auto p : v)
				p->draw(); // ERROR!, p�� Shape*�ε� Shape���� draw�Լ��� ����.
							// �ذ�å 1. p�� Rect*�� Circle*�� ĳ�����Ѵ�.
							//			=> ((Rect*)p)->draw() ó�� �ؾ��ϴµ�
							//				�ڵ带 �ۼ��� �� p�� ����Ű�� ��ü�� Rect���� Circle���� �� �� ����.
							// �ذ�å 2. Shape �ȿ��� draw�� �־���Ѵ�.
							// ��� : Shape �ȿ��� draw�� �־�� �Ѵ�.
		}
	}
}