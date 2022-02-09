#include <iostream>
#include <cstdlib>
using namespacestd;

// ���� �޸� �Ҵ�
// malloc / free : (�Լ�)����ڰ� ���ϴ� ������ �޸��Ҵ� / ����

// new / delete : (������)

// 1. malloc�� size�� ���������� new�� type�� �����Ѵ�.
// 2. malloc�� void*�� ��ȯ�ϱ� ������ ĳ������ �ʿ��ϴ�.
// 3. �ݸ� new�� ������ Ÿ���� �ּ�Ÿ���� ��ȯ�ϱ� ������ ĳ������ �ʿ����� �ʴ�.
// 4. int* p = new int; / delete p;
//	  int* p = new int[10]; / delete[]p;
//	   - ���ӵ� �޸𸮸� new�� �Ҵ��� ��� delete[] �����ڸ� ����ؾ� ��.

int main() {
	int* p1 = static_cast<int*>(malloc(sizeof(int))); // 4 bytes
	int* p2 = new int; //type�� ������ ��ŭ �Ҵ� ��. 4 bytes
	free(p1);
	delete p2;

	int* p3 = static_cast<int*>(malloc(sizeof(int) * 10)); //40 bytes
	free(p3);

	int* p4 = new int[10];// int[10] -> 40 bytes
	delete[] p4;

}