// 정리

/*
1. C 보다 발전된 C++ 문법들
 => 오버로딩, inline, template, reference, new, auto, decltype

2. 타입 한개를 만들 떄 사용하는 문법
 => private, public, protected
 => 생성자, 소멸자
 => 초기화 리스트 -> 생성자 뒤쪽에 : x(0), y(0) {}
 => static 멤버 데이터, static 멤버 함수
 => this
 => 상수 멤버 함수
 => 복사 생성자(day 5)

3. 상속 문법 + 객체지향 디자인 개념
 => upcasting, std::vector<Shape*> v 에는 모든 도형을 담는다.
 => 가상함수
 => 다형성 "p->draw()" 의 코드가 상황에 따라 다르게 동작
 => OCP. 나중에 클래스가 추가되어도 기존 코드는 수정되지 않도록 해야한다.
 => "Shape" 예제, "메뉴" 예제

4. 남은 것들
 => 연산자 재정의, 예외, 복사 생성자, STL 사용법
 */