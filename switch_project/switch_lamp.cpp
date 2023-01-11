#include<iostream>
#include "consol_input.h"
using namespace std;

void 전구그림()
{
	gotoxy(1, 1); cout << "□□";
	gotoxy(1, 2); cout << "□□";

	gotoxy(7, 1); cout << "□□";
	gotoxy(7, 2); cout << "□□";

	gotoxy(13, 1); cout << "□□";
	gotoxy(13, 2); cout << "□□";
}
int main()
{
	system("cls");
	전구그림();
	int num;
	gotoxy(1, 4);
	cursor(0);

	cout << "몇 번째 전구를 켜시겠습니까? : ";
	cin >> num;

	///////////////////////
	






	//////////////////////////////////////////////////////
	gotoxy(0, 7);
	TextColor(15, 0);
	return 0;
}