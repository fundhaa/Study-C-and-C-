// �Լ� ���� �޴� ���
/*
1. ���ڰ��� �����ϰ� �ʹ� - out parameter
= > ������ : void inc(int* p) { ++(*p); }
= > ���� :   void inc(int& r) { ++r; }

2. ���ڰ��� �������� �ʴ� ��� - in parameter
 ���ڰ�
	primitive type �̸� : call by value			foo(int n)
	user define type�̸� : const reference		foo(const Rect& r)
*/
// ���ۿ��� C++ core guideline �˻��غ��� �ߴ� ù���� ��ũ ����

#include <iostream>
#include <typeinfo>
int main() {
	// �Ϲ� �迭. �迭�� �̸� �ȿ� ũ�� ������ ��ϵǾ� �ִ�.
	// x�� Ÿ���� int[5]�̴�.
	int x[5] = { 1,2,3,4,5 };

	// p�� ���� ������ ����
	// p�� Ÿ���� int*�̰� ũ�� ������ ����.
	int* p = new int[5]{ 1, 2, 3, 4, 5 };

	std::cout << typeid(x).name() << std::endl; // int[5]
	std::cout << typeid(p).name() << std::endl; // int*

	// ���ο� for���� �Ϲݹ迭�� ����, ���� �Ҵ�� �迭 p�� �ȵȴ�.
	for (autu e : x) {
	}

	for (auto e : p) { // ERROR ũ�⸦ �𸣱� ������ ������ �����ؾ��ϴ��� �𸥴�.
	}
	delete[] p;
}