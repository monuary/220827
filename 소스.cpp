#include<iostream>
using namespace std;

namespace A
{
	namespace B
	{
		namespace C
		{
			int num1;
			int num2;
		}
	}
}

int main()
{
	A::B::C::num1 = 20;
	A::B::C::num2 = 30;
	namespace ABC = A::B::C;//중첩되어 있는 경우 이와 같이 이름공간을 재정의할 수 있다.
	using namespace ABC;//이름공간 간에 이름이 겹치는 함수가 존재하지 않는 한, 이름공간 두 개를 동시에 생략할 수 있다. 다만, 일일이 하나하나 지정하는 것이 좋은 습관이다.
	cout << num1 << endl << num2 << endl;
	return 0;
}