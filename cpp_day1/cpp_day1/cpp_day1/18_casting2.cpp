#include <iostream>
#include<cstdlib>
using namespace std;

// 1. static cast
// ���� �⺻���� C++ ĳ���� ������
// ������ Ÿ�ӿ� ĳ������ �����Ѵ�. (static�� �ǹ̴� ������ Ÿ��)
// ��Ÿ�ӿ� �������� �����Ƿ� �������� ����.
// ������ ���� Ÿ�Կ� ���� ĳ������ �����Ѵ�.

int main() {
	// void* -> T*
	// void �����͸� Ư�� Ÿ������ ��ȯ�ϴ� �͸� ���
	// int *p = (int*)malloc (sizeof(int));
	int* p = static_cast<int*>(malloc(sizeof(int))); // ����

	int n = 10;
	//double* pd = (double*)&n; // C����� ��� OK
	double* pd = static_cast<double*>(&n); // ERROR
	char* pd = static_cast<char*>(&n); // ERROR
}

//////////////////////////////////////////

// 2. reinterpret_cast
// => �޸𸮸� ���ؼ��ϴ� �뵵�� ����Ѵ�.
// C���� ���� ���

int main() {
	int* p = static_cast<int*>(malloc(sizeof(int)));

	int n = 10;
	char* pc = reinterpret_cast<char*>(&n); // ����
	printf("%x %x %x %x\n", pc[0], pc[1], pc[2], pc[3]);
}

//////////////////////////////////////////

// 3. const_cast
// : �޸��� ������� �����ϱ� ���ؼ� ���
// - const T* -> const_cast<T*> -> T*
// Ÿ���� ����ġ ������ �ذ��ϱ� ���� �뵵�� ���
void foo(int* p) {
	cout << *p << endl;
}

int main() {
	const int n = 100;
	cout << &n << endl; // ��� ������ �ּҸ� ������.
	// &n : const int *
	// Ÿ�� ����ġ
	foo((int*)&n); // ���� const int* -> int*
	foo(static_cast<int*>(&n)); // ERROR
	foo(reinterpret_cast<int*>(&n)); // ERROR	// �޸𸮸� ���ؼ��ϴ°� �ƴ϶� const�� ��״°� �ٸ� �ǹ̶�� �ľ��ϱ� ������ ����
	foo(const_cast<int*>(&n)); // ����
}

//////////////////////////////////////////