#pragma once
#include "Library.h"
#include "Game.h"
#include "Items.h"

using namespace std;

extern int heroHealth, heroAttack, heroMana, heroSpeed, heroArmor, getQuest;

void tunnelQuest() {
	setlocale(LC_ALL, "RU");

	cout << "!!  �� ���������� � ������� ��������� ����������  !!" << endl;

	system("pause");

	cout << "������� ����� ���������, � � �������� ������. ����� ������ ��� ������, ������� ������ ������ ������ ������������� ����� ������ �����." << endl;

	system("pause");

	cout << "### �������� ��������:  ###" << endl;
	cout << "1. �����������." << endl;
	cout << "2. ����� ������." << endl;
	int tunnelQuest;
	bool lamp = false;
	bool spichki = false;
	cin >> tunnelQuest;

	while (lamp == false) {
		switch (tunnelQuest) {
		case 1: {
			cout << "������ ���� ��������� �������� �������� ��� �� ��� �����. ����� ����� �� ���� ����� ����, � �� ��� �������� ������ �������������." << endl;
			cout << "### �������� ��������:  ###" << endl;
			cout << "1. ��������� ����." << endl;
			cin >> tunnelQuest;
			bool lootBool1 = true;

			if (tunnelQuest == 1) {
				while (lootBool1 == true) {
					bool itemList1[] = { 0, 0, 0 };
					cout << "������� ��������!" << endl;
					cout << "������ ��������� ���������: " << endl;
					if (itemList1[0] == false) {
						cout << "1. ����������� �����." << endl;
					}
					if (itemList1[1] == false) {
						cout << "2. ����� ������������." << endl;
					}
					if (itemList1[2] == false) {
						cout << "3. ������� ������." << endl;
					}

					system("pause");

					cout << "1. �������� ������� ��� ���������� � ���������." << endl;
					cout << "2. �����." << endl;
					cin >> tunnelQuest;
					if (tunnelQuest == 1) {
						if (tunnelQuest == 1) {
							cout << "� ��������� �������� ����� �������!" << endl;
							itemList1[0] = true;
							lamp = true;
						}
						if (tunnelQuest == 2) {
							cout << "� ��������� �������� ����� �������!" << endl;
							itemList1[1] = true;
						}
						if (tunnelQuest == 3) {
							cout << "� ��������� �������� ����� �������!" << endl;
							itemList1[2] = true;
							spichki = true;
						}
					}
					else if (tunnelQuest == 2) {
						lootBool1 = false;

						system("pause");
					}
				}
			}
		}
		}

		if (lamp == false) {
			cout << "������� ������� �����, � �� ���� ���� ������..." << endl;

			system("pause");

			cout << "### �������� ��������:  ###" << endl;
			cout << "1. ���������." << endl;
			cin >> tunnelQuest;
			
			system("pause");
		}


		else if (spichki == false) {
			if (lamp == true) {
				cout << "��� �� ��� ������ �����..." << endl;

				system("pause");

				cout << "###  �������� ��������:  ###" << endl;
				cout << "1. ���������." << endl;
				cin >> tunnelQuest;

				system("pause");
			}
		}
	}

	cout << "����� � ����� �����, ������, ��� � ������ - ��� ������������� �����, �������� ����� ������ �����������. ������ ��������� �����, ���������, ��� ��� �� ������� ��� �����������." << endl;
	cout << "��� �� ������ �� ����� � ������ ����� ������� � ����." << endl;

	system("pause");

	cout << "������ ������ ������, � ������ � �������� ������ � ��������� ���� ������. ��� �����..." << endl;
	enemy("�����", 8, 2, 4, heroHealth, heroMana, heroAttack, heroArmor, heroSpeed);
	
	cout << "������ ����� � �������� ������." << endl;

	system("pause");

	cout << "������ ������� ��, � ��������� �� ��������." << endl;
	cout << "###  �������� ��������:  ###" << endl;
	cout << "1. ����� ������." << endl;
	cout << "2. ����� �������" << endl;
	cin >> tunnelQuest;

	if (tunnelQuest == 1) {
		cout << "������� � ����� ������� � ����� ������. ������ ���� ��� ����� �� '������' �� ������� � ������ �����, ������� ��� ���������� ������� ��������������� ���������, ����������� ��� �������" << endl;
		cout << "������ ��� ���� ������" << endl;
	}

	else if (tunnelQuest == 2) {
		cout << "" << endl;
	}
}

void questFromGateKeeper() {

}

void questFromMayor() {

}