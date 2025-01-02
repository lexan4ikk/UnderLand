#pragma once
#include "Library.h"
#include "Game.h"
#include "Items.h"

using namespace std;

extern int heroHealth, heroAttack, heroMana, heroSpeed, heroArmor, getQuest;

void tunnelQuest() {
	setlocale(LC_ALL, "RU");

	cout << "!!  Вы пребываете в локацию Катакомбы Нотльхейма  !!" << endl;

	system("pause");

	cout << "Тяжелая дверь закрылась, и я двинулся вперед. Перед входом был тамбур, который сейчас служил местом складирования самых разных вещей." << endl;

	system("pause");

	cout << "### Выберите действия:  ###" << endl;
	cout << "1. Осмотреться." << endl;
	cout << "2. Пойти дальше." << endl;
	int tunnelQuest;
	bool lamp = false;
	bool spichki = false;
	cin >> tunnelQuest;

	while (lamp == false) {
		switch (tunnelQuest) {
		case 1: {
			cout << "Вокруг было помещение размером примерно два на три метра. Около одной из стен стоял стол, а на нем предметы разной необходимости." << endl;
			cout << "### Выберите действия:  ###" << endl;
			cout << "1. Осмотреть стол." << endl;
			cin >> tunnelQuest;
			bool lootBool1 = true;

			if (tunnelQuest == 1) {
				while (lootBool1 == true) {
					bool itemList1[] = { 0, 0, 0 };
					cout << "Найдены предметы!" << endl;
					cout << "Список найденных предметов: " << endl;
					if (itemList1[0] == false) {
						cout << "1. Керосиновая лампа." << endl;
					}
					if (itemList1[1] == false) {
						cout << "2. Набор инструментов." << endl;
					}
					if (itemList1[2] == false) {
						cout << "3. Коробок спичек." << endl;
					}

					system("pause");

					cout << "1. Выберите предмет для добавления в инвентарь." << endl;
					cout << "2. Выйти." << endl;
					cin >> tunnelQuest;
					if (tunnelQuest == 1) {
						if (tunnelQuest == 1) {
							cout << "В инвентарь добавлен новый предмет!" << endl;
							itemList1[0] = true;
							lamp = true;
						}
						if (tunnelQuest == 2) {
							cout << "В инвентарь добавлен новый предмет!" << endl;
							itemList1[1] = true;
						}
						if (tunnelQuest == 3) {
							cout << "В инвентарь добавлен новый предмет!" << endl;
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
			cout << "Впереди слишком темно, я не могу идти дальше..." << endl;

			system("pause");

			cout << "### Выберите действия:  ###" << endl;
			cout << "1. Вернуться." << endl;
			cin >> tunnelQuest;
			
			system("pause");
		}


		else if (spichki == false) {
			if (lamp == true) {
				cout << "Мне не чем зажечь лампу..." << endl;

				system("pause");

				cout << "###  Выберите действия:  ###" << endl;
				cout << "1. Вернуться." << endl;
				cin >> tunnelQuest;

				system("pause");
			}
		}
	}

	cout << "Когда я зажег лампу, первое, что я уивдел - это заплесневелые стены, покрытые некой вязкой субстанцией. Сделав несколько шагов, оказалось, что тем же покрыта вся поверхность." << endl;
	cout << "Так же спокоя не давал и острый запах фекалий и мочи." << endl;

	system("pause");

	cout << "Пройдя метров двести, я привык к сдешнему запаху и продолжал идти дальше. Как вдруг..." << endl;
	enemy("Крыса", 8, 2, 4, heroHealth, heroMana, heroAttack, heroArmor, heroSpeed);
	
	cout << "Одолев крысу я двинулся дальше." << endl;

	system("pause");

	cout << "Спустя столько же, я наткнулся на развилку." << endl;
	cout << "###  Выберите действия:  ###" << endl;
	cout << "1. Пойти налево." << endl;
	cout << "2. Пойти направо" << endl;
	cin >> tunnelQuest;

	if (tunnelQuest == 1) {
		cout << "Свернув в левую сторону я пошел дальше. Вокруг было все такой же 'пейзаж' из плесени и черной слизи, который еще добавлялся редкими люминесцентными сорняками, неизвестной мне природы" << endl;
		cout << "Пройдя еще чуть дальше" << endl;
	}

	else if (tunnelQuest == 2) {
		cout << "" << endl;
	}
}

void questFromGateKeeper() {

}

void questFromMayor() {

}