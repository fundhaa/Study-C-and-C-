// 17_reference2.cpp
#include <iostream>
using namespace std;

int main() {
	int n = 100;
	int* p = NULL; //�ʱ�ȭ�� ���� �ʾƵ� �ȴ�. ������ ������ ���� �����Ƿ� ��ȿ�� �޸����� � �޸����� �𸥴�.
	// NULL �������� ������ ����

	int& r = n; // �ݵ�� �ʱ�ȭ�� �ؾ��Ѵ�. NULL ���۷����� �������� �ʴ´�.
}