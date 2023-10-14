/* Операции Инкремент и Декремент */
#include <iostream>
using namespace std;
int main()
{
	int x = 4, y = 5;
	cout << ++x <<  "\t" << --y << endl;
	cout << x++ << "\t" <<  y-- << endl;
	cout << x << "\t" << y << endl;
	return 0;
}