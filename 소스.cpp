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
	namespace ABC = A::B::C;//��ø�Ǿ� �ִ� ��� �̿� ���� �̸������� �������� �� �ִ�.
	using namespace ABC;//�̸����� ���� �̸��� ��ġ�� �Լ��� �������� �ʴ� ��, �̸����� �� ���� ���ÿ� ������ �� �ִ�. �ٸ�, ������ �ϳ��ϳ� �����ϴ� ���� ���� �����̴�.
	cout << num1 << endl << num2 << endl;
	return 0;
}