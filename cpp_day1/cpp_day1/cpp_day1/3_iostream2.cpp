// 3_iostream2.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n1 = 0xFAFA;
	// 1111 1010 1111 1010

	// C++은 2진수 상수를 사용할 수 있다. => C++11
	int n2 = 0b1111101011111010;
	
	cout << n1 << " , " << n2 << endl; // decimal 출력 = 64250

	// printf("%x", n1);
	// hex 등의 출력 형태를 변경하는 기능
	//    ==> IO 조정자
	cout << hex << n1 << endl; // 16진수로 출력 조정
	cout << uppercase; // 대문자로 출력 조정
	cout << n2 << endl; //FAFA

	cout << dec; // 다시 10진수로 출력 조정
	cout << n2 << endl; // 64250

	// C언어 문법
	printf("%10d\n", n1); // 10칸 띄우고 출력
	printf("%010d\n", n1); // 0으로 10칸을 채우고 출력, 0은 하나에 2칸

	// C++ 문법
	// iomanip - setw등과 같은 함수 포함
	cout << setw(10) << n1 << endl; // 10칸 띄우고 출력
	cout << setw(10) << setfill('+') << n1 << endl; // +로 10칸 채우고 출력
}