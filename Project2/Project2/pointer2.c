/*
#include <stdio.h>

int main(void) {
	double d;
	double* pD = &d; // pD에는 d의 주소값이 저장
	*pD = 12.345; // pD에 저장된 값으로 참조. 그 다음 그 위치에 12.345를 저장한다.

	printf("%lf\n", *pD); //pD가 참조하는 d의 값, lf는 더블형 출력때 씀
	printf("%p,%p, %p\n", &*pD, &d, pD); // 이 세개가 같은 값이 나와야함 참조해서 해당영역으로 접근한 뒤 그 영역의 주소, d 가 있는 위치의 주소, pD의 값

	// 간점참조연산자 (*)
	// 포인터의 타입
	char data[17] = "0123456789ABCDEF"; // 총 17bytes

	// char로 가져와서 처리할지, short로 가져와서 처리할지, int로 가져와서 처리할지
	char* pC = &data[0]; // data 첫번쨰 배열의 주소값
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

	// unsigned int 를 character형으로 바꿔서 처리
	unsigned int version = 0x1d231231;
	char* kk = (char*)&version;
	printf("\n답은\n");
	printf("%x\n", *kk);
	printf("%x\n", *(kk+1));
	printf("%x\n", *(kk + 2));
	printf("%x\n", *(kk + 3));

	int* a; //해석단위가 int
	int(*a)[10]; // 해석단위가 int[10]
}
*/