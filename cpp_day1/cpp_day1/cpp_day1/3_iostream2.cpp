// 3_iostream2.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n1 = 0xFAFA;
	// 1111 1010 1111 1010

	// C++�� 2���� ����� ����� �� �ִ�. => C++11
	int n2 = 0b1111101011111010;
	
	cout << n1 << " , " << n2 << endl; // decimal ��� = 64250

	// printf("%x", n1);
	// hex ���� ��� ���¸� �����ϴ� ���
	//    ==> IO ������
	cout << hex << n1 << endl; // 16������ ��� ����
	cout << uppercase; // �빮�ڷ� ��� ����
	cout << n2 << endl; //FAFA

	cout << dec; // �ٽ� 10������ ��� ����
	cout << n2 << endl; // 64250

	// C��� ����
	printf("%10d\n", n1); // 10ĭ ���� ���
	printf("%010d\n", n1); // 0���� 10ĭ�� ä��� ���, 0�� �ϳ��� 2ĭ

	// C++ ����
	// iomanip - setw��� ���� �Լ� ����
	cout << setw(10) << n1 << endl; // 10ĭ ���� ���
	cout << setw(10) << setfill('+') << n1 << endl; // +�� 10ĭ ä��� ���
}