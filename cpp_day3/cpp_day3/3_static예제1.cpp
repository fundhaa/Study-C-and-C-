// 3_static 예제1
#include <iostream>

// 프로그램에서 날짜를 많이 다루게 된다.
// ==> DATA 타입을 설계하자

// 단일 책임의 원칙 : 년월일시분초를 다 넣는것보다 나눠서 연원일, 시분초로 담는게 좋다.
// 클래스는 하나에 하나만

// 각 월별 날짜수.
// 전역변수로 놓기 보다는 클래스 안으로 데려오는게 나을 듯.
// 왜냐면 외부에서 접근해서 배열 value 바꿔버리면 문제가 생기기 때문이다.
// int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

class Date
{
	int year;
	int month;
	int day;
	//int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // instance 멤버데이터, 일반 멤버데이터 니까
	// d1, d2 등 날짜 객체를 선언할때마다 객체마다 따로 days가 생성된다. 그럼 메모리적으로 손해이니까
	// static으로 선언하여 한번만 생성되게 한다.
	static int days[12]; // static은 외부에서 초기화 해주어야 한다.
public:
	Date(int y, int m, int d) :year(y), month(m), day(d) {

	}
	// 최대한 창의력을 발휘해서 사용자들이 좋아할만한 다양한 멤버함수를 제공해야 한다.
	// == 설계능력
	Date afterDays(int ds)
	{
		Date temp(year, month, day + ds);
		if (day == days[month - 1]+1){
			month = month + 1;
			day = 1;
		}
		if (month == 13) {
			year = year + 1;
			month = 1;
		}

		return temp;
	}
};
int Date::days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; // static 멤버데이터 초기화

int main() {
	Date today(2022, 2, 11);
	Date d = today;
	Date d = today.afterDays(1000);
}