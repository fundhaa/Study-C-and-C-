#include <iostream>
#include <string>

class Person {
	std::string name;
	int age;
public:
	// ��� �ʱ�ȭ ����Ʈ : ������ () �ڿ� : �� ���� ����� �ʱ�ȭ
	Person(xonst std::string& s, int a) : name(s), age(a) // <== �� �ڵ尡 ����.
	{	//�Ʒ�ó�� �ʱ�ȭ �ϴ� ���� ���� �ʴ�.
		name = s;
		age = a;
	}
};
int main() {
	Person p("Ha", 28);
}