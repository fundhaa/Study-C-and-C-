//4_variable3.cpp

#include <iostream>
using namespace std;

int main() {
	int x1 = 1.2;
	cout << x1 << endl; // 강제로 타입캐스팅이 되어 warning이 뜬다.

	//int x2{ 1.2 };
	//cout << x2 << endl; // Error를 통해 타입 선언이 잘못되었음을 알려준다. 사용자들이 엄격하게 관리할 수 있다.
						// Preventing narrow

	char c1 = 300; // 1byte라서 -127~+128 까지 가능하므롷 overflow 발생!
	cout << c1 << endl; // overflow - warning!
	printf("%d\n", c1); // 윗부분이 짤려서 44 출력

	char c2 = { 300 }; // Error!
	// >> Uniform initialization 을 사용하여 코드를 좀 더 엄격하게 관리할 수 있다.

}