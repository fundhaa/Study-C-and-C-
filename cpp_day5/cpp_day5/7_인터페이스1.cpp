#include <iostream>

class Camera {
public:
	void take() { std::cout << "take picture" << std::endl; }
};

class HDCamera {
public:
	void take() { std::cout << "take HD picture" << std::endl; }
};

class People {
public:
	void useCamera(Camera* p) { p->take(); }
}; // �ϳ��� Ŭ������ �ٸ� Ŭ������ ���� Ŭ���� �̸��� ���� ��� => ���� ����(Ȯ�强�� ���� ������)

int main() {
	People p;
	Camera c;
	p.useCamera(&c);

	HDCamera hc;
	p.useCamera(&hc); // �̰� �Ϸ��� people Ŭ������ HDCamera�� �Է����� �޴� �Լ��� �־�����Ѵ�.
						// HDCamera�� ���͵� �Լ��� ���� ���ϰ� �ؾ� OCP�� �����ϴµ� �̰� OCP�� �������� ���ϴ� �ڵ��̴�.
}