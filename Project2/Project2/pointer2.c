/*
#include <stdio.h>

int main(void) {
	double d;
	double* pD = &d; // pD���� d�� �ּҰ��� ����
	*pD = 12.345; // pD�� ����� ������ ����. �� ���� �� ��ġ�� 12.345�� �����Ѵ�.

	printf("%lf\n", *pD); //pD�� �����ϴ� d�� ��, lf�� ������ ��¶� ��
	printf("%p,%p, %p\n", &*pD, &d, pD); // �� ������ ���� ���� ���;��� �����ؼ� �ش翵������ ������ �� �� ������ �ּ�, d �� �ִ� ��ġ�� �ּ�, pD�� ��

	// �������������� (*)
	// �������� Ÿ��
	char data[17] = "0123456789ABCDEF"; // �� 17bytes

	// char�� �����ͼ� ó������, short�� �����ͼ� ó������, int�� �����ͼ� ó������
	char* pC = &data[0]; // data ù���� �迭�� �ּҰ�
	short* pS = (short*)&data[0]; // short = 2 bytes
	int* pl = (int*)&data[0];

	char c = *pC; // 0(1bytes)
	short s = *pS; // 01(2bytes)
	int i = *pl; // 0123(4bytes)

	printf("%c, %d, %d", c, s, i);

	pC++; // char * 1 = 0x01
	pC = &data[3]; // 0x03

	pC = pC + 10; // char *10 -> 10 bytes
	pS = pS + 10; // short * 10 -> 20 bytes

	int intvalue = 10;
	int* pInt = &intvalue;
	*pInt = 20;

	// unsigned int �� character������ �ٲ㼭 ó��
	unsigned int version = 0x1d231231;
	char* kk = (char*)&version;
	printf("\n����\n");
	printf("%x\n", *kk);
	printf("%x\n", *(kk+1));
	printf("%x\n", *(kk + 2));
	printf("%x\n", *(kk + 3));

	int* a; //�ؼ������� int
	int(*a)[10]; // �ؼ������� int[10]
}
*/