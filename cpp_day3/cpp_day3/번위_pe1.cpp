// pe1.cpp
#include <cstdio>

int g1 = 0x11223344;
int g2 = 0x99887766;

void foo() {
	int a = 0;
	printf("hello\n");
}

int main() {
	// stack �޸𸮿� 4����Ʈ �Ҵ�.�ϰ� �ű⿡ 10�� ������� ���� �ڵ� ����
	int n = 10;
	
	printf("hello\n");
	foo();
	// �Ʒ� �ڵ�� ���� �ڵ�� heap�� 40byte�� ��� �� �ּҸ� ���ÿ��� �� �ּҸ� �����Ѷ� ��� �����.
	int* p = new int[10];
	delete[] p;
}			// �� �Լ��� ����� ��������(���ÿ� �ִ�)�� �ı��ϴ� ���� �ڵ� ����
// 32bit(x86) release�� ����

// 1. ������
// 2. PEView �˻��ؼ� PEView �ٿ�
//  ������ ���� ���� ������ PE-Portable Executable �̶�� �Ѵ�.
// 3. PEView�� �������� ���� OK (cpp_day3/Release/cpp_day3.exe)
