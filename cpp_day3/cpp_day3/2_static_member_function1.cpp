// 2_static_member_function1 - 110 page
#include <iostream>

class Car
{
	int color; // "instance member" ��� �Ѵ�.
	static int cnt;
public:
	// int cnt = 0; // ��ü�� �Ѱ��� ����
	Car() { ++cnt; }
	~Car() { --cnt; }

	//int getCount() { return cnt; } // ��ü�� �־�߸� ȣ�� ����, �޸𸮿� ������ �ҷ������� ���Ѵ�.
	static int getCount() { return cnt; } // ��ü�� ��� ȣ�� ������ �Լ�
											// "Ŭ�����̸�::�Լ��̸�" ���� ȣ��
};

int Car::cnt = 0; // Car�� ����ϴ� cnt �����̰� 0���� �ʱ�ȭ�� �Ǿ��ִ�.


int main() {

	// ���⼭ �ڵ����� ������ �˰� �ʹٴ� ����,
	// => Car::cnt�� ��ü�� ��� �޸𸮿� �����Ƿ� �о�� �� �־�� �Ѵ�.
	std::cout << Car::getCount() << std::endl; // 0

	Car c1;
	Car c2;

	//std::cout << Car::cnt << std::endl; // cnt�� private ����� �����Ƿ� ERROR
	std::cout << c1.getCount() << std::endl; // ���������� �Ʒ� �ڵ尡 ����.
	std::cout << Car::getCount() << std::endl; // Ŭ�����̸�::�Լ��̸� �̷��� ����ϴ°� ����
}