#include <iostream>
#include "Brick.h"
using namespace std;
int main()
{
	system("chcp 1251");
	int n;
	cout << "введите сколько кирпичей в вашем доме" << endl;
	cin >> n;
	Brick brick(4);
	cout << "цена дома: "; brick.Cost_House(n);
	cout << "вес дома: "; brick.KG_House(n);

}