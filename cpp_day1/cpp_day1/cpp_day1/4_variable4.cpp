#include <iostream>
using namespace std;

// auto - C++11
//		: 컴파일 타임에 컴파일러가 '우항의 타입과 동일한 타입'으로 타입을 결정한다.
//			=> 반드시 초기화가 필요하다.
//			=> C의 auto 키워드를 다른 의미로 사용.

// decltype - C++11
//		: 컴파일 타임에 지정된 변수의 타입과 동일한 타입으로 만들어준다.
//			=> 초기값은 존재하지 않아도 된다.
int main() {
	int x[10] = { 1, 2, 3, 4, 5 };
	//int n = x[0];
	auto n = x[0];
	// 여기서 x[]의 type을 double로 변경하면 n의 type도 double로 변경해주어야 한다.
	// 하지만 int n이 아닌 auto n으로 선언하면 알아서 반영

	//auto n2; // Error!! 초기화가 필요하다.
	int* p = x; // &x[0] 여기에 auto를 적용하면 알아서 반영
	//auto* p = x;// &x[0]
	
	// auto
	// 장점 수정 포인트가 하나이다, 유지보수 비용을 줄어준다.
	// 단점 : type을 정확히 명시하지 않으면 코드 이해가 떨어질 수 있다.

	decltype(p) p2; // == int* p2; p와 동일한 타입으로 p2 선언
	decltype(x) x2 = { 0, }; // int x2[10]와 똑같은 type, 0이 10개 들어간 배열

	for (int i = 0; i < 10; ++i) {
		cout << x2[i] << endl;
	}
}