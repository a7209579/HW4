#include "Complex.h"

int main()
{
	Complex c1(3, 4);
	Complex c2(2, -4);
	Complex c3(3, -1);
	Complex c4(4, 3);
	Complex c5(5, 6);
	cout << "first=" << c1 + c2 * c3 << endl;
	cout << "second=" << c4 - c5 << endl;
	cout << "++frist=" << ++(c1 + c2 * c3) << endl;
	cout << "--second=" << --(c4 - c5) << endl;

	system("pause");
	return 0;
}