#pragma once

#include <iostream>

extern int heroHealth, heroAttack, heroMana, heroSpeed, heroArmor, getQuest;

using namespace std;

void healingPotion() {
	setlocale(LC_ALL, "RU");
	cout << "�� ������������ ����� ��������!" << endl;
	cout << "��������: + 10" << endl;

	heroHealth += 10;

	cout << "������� ��������� ��������: " << heroHealth << endl;

	system("pause");
} 

void bottleOfVodka() {
	setlocale(LC_ALL, "RU");
	cout << endl << "�� ������������ ������� �����!" << endl;
	cout << "��������: + 6" << endl;

	heroHealth += 6;

	cout << "������� ��������� ��������: " << heroHealth << endl;

	system("pause");
}

void bottleOfBrendy() {
	setlocale(LC_ALL, "RU");
	cout << endl << "�� ������������ ������� ������!" << endl;
	cout << "��������: + 7" << endl;

	heroHealth += 7;

	cout << "������� ��������� ��������: " << heroHealth << endl;

	system("pause");
}

void pintOfEl() {
	setlocale(LC_ALL, "RU");
	cout << endl << "�� ������������ ����� ���!" << endl;
	cout << "��������: + 3" << endl;

	heroHealth += 3;

	cout << "������� ��������� ��������: " << heroHealth << endl;

	system("pause");
}