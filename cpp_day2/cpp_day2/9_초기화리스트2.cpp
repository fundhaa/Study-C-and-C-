#include <iostream>
#include <string>

class Person {
	std::string name;
	int age;
public:
	Person(xonst std::string& s, int a) : name(s), age(a)  // �ʱ�ȭ initialization
		name = s;
		age = a; // �ʱ�ȭ�� �ƴ� ���� assignment
	}
};
int main() {
	Person p("Ha", 28);

	// �ʱ�ȭ vs ����
	// 1. premitive type�� ��� �ʱ�ȭ�� ������ ���� �����ϴ�
	int a = 10; // �ʱ�ȭ, ������ ����鼭 �ִ� ��
	
	int b;
	b = 10; // ����, ������ ���� �Ŀ� �ִ� ��

	// 2. user type �� ���� ���� �ٸ���
	std::string s1("Ha"); // ������ 1ȸ ȣ��Ǿ� �ʱ�ȭ�� �ȴ�.

	std::string s2; // 1. ����Ʈ ������ ȣ��
	s2 = "Ha";		// 2. ���Կ����� ȣ��(s2.operator=("Ha")

	// 3. �ʱ�ȭ�� ������ ������ �ȵǴ� �� = const
	const int c = 10; // ����, �ʱ�ȭ ����
	c = 20; // ERROR, ������ �ȵ�.

}