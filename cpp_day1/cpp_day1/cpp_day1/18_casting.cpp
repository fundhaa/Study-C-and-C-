// 18_casting.cpp

#include <iostream>
using namespace std;

// C����� ĳ������ �ʿ��� ����
// 1) void* -> int *
// 2) �޸𸮸� ���ؼ�

// C��� ĳ������ ������
// 1) ĳ������ ������ �м��ϱ� ��ƴ�.
// 2) C++ ����� ĳ������ �������� �ʴ´�. => �����ϴ�.

// C++ ĳ������ ������ ���� 4���� ĳ���� �����ڸ� �����Ѵ�.
// - static_cast
// - reinterpret_cast
// - const_cast
// - dynamic_cast -> Ư���� case�� ���߿� ���

int main()
{

	int x = 10;
	double* pd = (double*)&x;
	// �����ϴ�. ������ ���� �޸� ����
	*pd = 3.14;

	// C: void*(void ������)�� �ٸ� ������ Ÿ������ ��ȯ�ϴ� ���� �Ϲ������� ���������,
	// C++�� ������� �ʴ´�.
	// -> ������� ĳ������ �ʿ��ϴ�.
	// ���� �Ʒ� malloc ��� (int*)malloc���� ����Ѵ�.
	int* p = malloc(sizeof(int));

	int n = 0x12345678;
	char* pc = &n; // �̷��� ������
	char* pc = (char*)&n; // �Ʒ��� �������.

	printf("%x %x %x %x \n", pc[0], pc[1], pc[2], pc[3]);
}