#include <iostream>

class Shape {
public:
	// 1. �����Լ��� ���� ���� virtual�� �ٿ����Ѵ�.
	virtual void draw() {}
};

class Rect : public Shape {
public:
	// 2. �����Լ��� override�� ���� virtual�� �ٿ��� �ǰ� �Ⱥٿ��� ������ �������� ���� ���̴°� ����.
	 //virtual void draw() {}

	// 3. �����Լ� �� ���ǽ� ��Ÿ�� �߻��ϸ� ������ �ƴ϶� ���ο� �����Լ���� �����Ϸ��� �Ǵ��Ѵ�.
	// ������ �ȳ��� ���ο� �Լ��� ������ٰ� �Ǵ���.
	 //virtual void Draw() {}

	 // 4. 3���� ���� ���� ���׸� �����Ѽ� override Ű���带 �������.(C++11)
	 virtual void Draw() override {} // ERROR 
									// ���� ����°� ���ο� �Լ��� �ƴ϶� ���Ŭ������ �ִ� �Լ��� override �ѰŴ�
									// ���� ���Ŭ������ �̷� �Լ��� ���ٸ� ������ ����� ��� �ǹ�
	 virtual void draw() override {} // ����
};
// ��� : �����Լ� �� ���ǽ� �ǵ����̸� override Ű���� �־ ������

int main() {

}