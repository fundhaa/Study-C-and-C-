// 참조반환1
#include <iostream>

class Point {
public:
	int x, y;

	~Point() { std::cout << "~Ponit()" << std::endl; } // 소멸자가 불리는지 확인하기 위해 로깅
};

// 왜 리턴용 임시객체라는 개념이 있는가?
Point f1() {
	Point pt = {1, 2};
	return pt;	// 이 순간, pt는 어떻게 될까?
				// pt는 지역변수라 파괴되기 때문에,
				// 리턴을 위한 임시 객체를 생성(pt 복사)한 뒤
				// 리턴을 위한 입시 객체를 반환한다.
}

Point& f2() {
	Point pt = { 1, 2 };
	return pt; // 지역변수는 절대 참조리턴하면 안된다. 함수밖에서 파괴되기 때문에,
				// 값 반환만 사용해야 한다.
}

Point pt = { 1, 2 };
Point& f3() {
	return pt; // 안전하다. 지역변수가 아닌 전역변수이므로 함수 호출이 종료되어도 파괴되지 않는다.
}

int main()
{
	std::cout << "------------------" << std::endl;
	f1(); 
	std::cout << "------------------" << std::endl;
}