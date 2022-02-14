// 2_shape1 - 152 page

#include <iostream>
#include <vector>

// 1. �簢�� ���� �� ��ǥ 4�� �޴� �ͺ���, ��ǥ �ΰ��� ������ �ǵ���
// ��� ������ Ÿ������ �����ϸ� ���ϴ�.

// 2. ������ ��� Ŭ������ �ִٸ� ��� ������ ��� ������ �� �ִ�.
// class Shape ����� �� Ŭ���� �ڿ� : public Shape �߰�(���)
class Shape {

};

// ������ ���� �ʱ�ȭ�ϰ�, ��������� �ְ� ��� �ؾ���.
// �ٵ� ���Ǹ� ���� ���������, ������ ����.
class Rect : public Shape {
	int x, y, v, h; // ���������
public:
	Rect(); // ������
	void draw() { std::cout << "Draw Rect" << std::endl; }
};

class Circle : public Shape {
public:
	void draw() { std::cout << "Draw Circle" << std::endl; }
};

int main() {
	//std::vector<Rect*> v; // ��� ������ �����ϱ� ���� ���� vector�ε� Rect�� ���� �� �ְ� Circle�� ������
	//std::vector<Circle*> v2; // �̰� circle�� ������ �� �ִµ� �߿��Ѱ� rect�� circle�� ���� ������ �������� ���Ѵ�.
	// �̰� ��� �����ؾ��Ѵ�.
	// ������ ��� class�� ������ �Բ� ���� �����ϴ�.

	std::vector<Shape*> v; // ��� ������ �����ϴ� vector ����
}