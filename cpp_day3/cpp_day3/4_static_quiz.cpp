// 4_static quiz
class Object {
	int idata;
	static int sdata;
public:
	// 에러는? - 116 page
	// static 멤버 데이터 : 객체가 없어도 메모리에 있다. 모든 객체가 공유한다.
	// static 멤버 함수 : 객체 없이 호출 가능.
	void f1() {
		idata = 10; //1
		sdata = 10; //2
		f2();		//3
	}
	// 핵심 : static 멤버 함수는 static 멤버만 접근 가능하다.
	// f1을 선언해줘도 f2에서 idata에 접근할 수 없다.
	static void f2()
	{
		idata = 10; //4 ERROR
		sdata = 10; //5
		f1();		//6 ERROR
	}
};

int Object::sdata = 0;
int main() {
	Object::f2(); // 객체 없이 이렇게 호출 가능한게 핵심이다.

	// Object::sdata 는 static 이므로 객체 없이도 메모리에 올라가있다. 이걸 0으로 초기화한 상태
	// Object::f2() 도 static 이므로 객체 없이 메모리에 올라가있다. 이들은 그냥 부르면 되는데,
	// idata, f1() 은 객체 없이는 메모리에 올라가 있지 않다.
	// 객체를 선언하지 않았으므로 idata, f1()은 에러이다.
	// 아래와 같이 객체가 있어야 호출 가능하다.
	Object obj;
	obj.f1(); // f1을 선언해주면 f1이 메모리에 올라가고 idata도 f1안에 있기 때문에 자동으로 메모리에 올라간다.
	// 근데 이렇게 해도 f2에서는 idata에 접근할 수 없다. f2는 static 이므로
}