// 3_iostream.cpp
#include <cstdio>
#include <iostream>

using namespace std;

/*
int main()
{
	int age;

	scanf("%d", &age); // call by reference 방식으로 age를 수정할 수 있게 해줌
	scanf("%lf", &height);

	printf("나이  : %d\n", age);
	printf("키 : %lf\n", height);
	return 0;
}
*/
// std::cout : 표준 출력 객체
//  std::cin : 표준 입력 객체

// 1. 변수의 주소를 전달하지 않았음에도, 변수의 값을 변경하는 것이 가능하다?
// 2. 서식(%d, %lf 등)을 지정하지 않아도 각 타입에 대한 입, 출력이 제대로 수행된다?
// 3. std::cout / std::cin / std::endl 이들은 어떤 원리로 구현되어 있는가? 정체는 무엇인가?

int main()
{
	int age;
	double height;

	cin >> age; // cin으로 입력받은 데이터를 age로 전달
	cin >> height;

	cout << "나이 : " << age << endl; // 나이라는 데이터가 cout으로 출력된다.
	cout << "키 : " << height << endl;
}