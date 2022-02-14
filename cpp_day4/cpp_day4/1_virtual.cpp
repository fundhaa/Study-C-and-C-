#include <iostream>

class Animal {
	int age;
public:
	void cry1() { std::cout << "Animal cry1" << std::endl; } // 1

	// �����Լ�(virtual) : dynamic binding �ش޶�� ���þ�(����ð��� ȣ���� �����ش޶�)
	virtual void cry2() { std::cout << "Animal cry2" << std::endl; }
};
class Dog :public Animal {
public:
	// override : ��� Ŭ������ ����Լ��� �Ļ� Ŭ������ �ٽ� ����� ��(������ �Ȱ���)
	// overloading : ������ ������ Ÿ���� �ٸ� ���( square(int), square(double)
	void cry1() { std::cout << "Dog cry1" << std::endl; } // 2 override

	// �����Լ�(virtual) : dynamic binding �ش޶�� ���þ�(����ð��� ȣ���� �����ش޶�)
	virtual void cry2() { std::cout << "Dog cry2" << std::endl; }

};

int main() {
	Animal a; a.cry1(); // 1 Animal cry1
	Dog d; d.cry1(); // 2 Dog cry1

	//�����Ϸ��� p�� ����Ű�� ��ü�� ���������� �� ���� ����.
	//if(������Է� == 1) p = &a;

	Animal* p = &d;
	p->cry1(); // ������ �� �� �θ�. Animal cry1
				// ��ü�� Dog�̹Ƿ� �������δ� Dog cry1�� ȣ���ϴ°� �´�.
				// C++, C# : Animal cry1
				// java, swift, kotlin, python : Dog cry1

	p->cry2(); // ������ �� �θ�. Dog cry2
				// ����ð��� �޸� ���� ������. 
}
// 161 page, �Լ� ���ε�(��� ��ü����� ���������� �ش�)

// p->cry1() �� ��� �Լ��� ������ ���ΰ�? "�Լ� ���ε�"
/*
1. static binding : �����Ϸ��� �����Ͻð��� �Լ� ȣ���� �����ϴ� ��.
					�����Ϸ��� p�� ����Ű�� ��ü�� �������� �� �� ����.
					�����Ϸ��� �ƴ� ������ p ��ü�� Ÿ���� "Animal*"�̶�� �� ���̴�.
					�׷��� ������ ������ Ÿ������ ȣ��.
					Animal cry1 ȣ��
					(������ �����̶�� �����ϸ� �� ��)
					�������� ���������� �ʴ�. early binding
					C++, C#�� static binding�� �⺻���� �ϳ� dynamic binding�� ��û�� �� �ִ�.(�����Լ� ���)
		
2. dynamic binding : ������ �ð��� p�� ����Ű�� ���� �����ϴ� ���� �ڵ带 �����Ѵ�.
					����ð��� p�� ����Ű�� ���� �����ϴ� �ڵ带 ���� �� ����
					p�� ����Ű�� ���� ���� ���� ��ü�� ���� �Լ� ����
					Dog ��ü��� Dog cry1 ȣ��
					(������ �� ȣ���ϴ°Ŷ� ��Ȯ�� Ÿ���� ȣ���Ѵ�.)
					�޸� ������ �����ؾ��ϱ� ������ �������� �����̴�. late binding
					java, swift, python, kotlin
*/