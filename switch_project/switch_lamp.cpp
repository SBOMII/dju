#include<iostream>
#include "consol_input.h"
using namespace std;

void �����׸�()
{
	gotoxy(1, 1); cout << "���";
	gotoxy(1, 2); cout << "���";

	gotoxy(7, 1); cout << "���";
	gotoxy(7, 2); cout << "���";

	gotoxy(13, 1); cout << "���";
	gotoxy(13, 2); cout << "���";
}
int main()
{
	system("cls");
	�����׸�();
	int num;
	gotoxy(1, 4);
	cursor(0);

	cout << "�� ��° ������ �ѽðڽ��ϱ�? : ";
	cin >> num;

	///////////////////////
	






	//////////////////////////////////////////////////////
	gotoxy(0, 7);
	TextColor(15, 0);
	return 0;
}