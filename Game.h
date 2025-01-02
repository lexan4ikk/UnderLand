#pragma once

#include <iostream>
#include <string>
#include <map>
#include <ctime>
#include <cstdarg>
#include "Inventory.h"

extern int heroHealth, heroAttack, heroMana, heroSpeed, heroArmor, getQuest;
extern bool questList[];

// Enemy function
void enemy(std::string name, int health, int damage, int speed, int& heroHealth, int& heroMana, int& heroAttack, int& heroArmor, int& heroSpeed) {
    setlocale(LC_ALL, "RU");

    int enemyHealth = health;
    int enemyDamage = damage;
    std::string enemyName = name;
    int enemySpeed = speed;

    std::cout << "!!!  НА ВАС НАПАЛ: " << enemyName << "  !!!" << std::endl;
    std::cout << "||| Здоровье: " << enemyHealth << "." << std::endl;
    std::cout << "||| Урон: " << enemyDamage << "." << std::endl;

    system("pause");

    bool fightBool = true;
    while (fightBool) {
        std::cout << std::endl;
        std::cout << "###  Выберите следующие действия:  ###" << std::endl;
        std::cout << "1. Атаковать." << std::endl;
        std::cout << "2. Бежать." << std::endl;
        int fight;
        std::cin >> fight;

        switch (fight) {
        case 1: {
            std::cout << "###  Выберите действия:  ###" << std::endl;
            std::cout << "1. Атаковать." << std::endl;
            std::cout << "2. Защита." << std::endl;
            int fightOption;
            std::cin >> fightOption;

            switch (fightOption) {
            case 1: {
                int damageDealt = rand() % (heroAttack + 1);
                enemyHealth -= damageDealt;

                // Шанс получить урон
                int chance = rand() % 100; // 0-99
                int receivedDamage = 0;
                if (chance < 50) { // 50% шанс получить урон
                    receivedDamage = rand() % (enemyDamage + 1);
                    heroHealth -= receivedDamage;
                    std::cout << "Вы получили урон: " << receivedDamage << std::endl;
                }
                else {
                    std::cout << "Вы не получили урон." << std::endl;
                }

                std::cout << "Вы нанесли урон: " << damageDealt << std::endl;
                std::cout << "Оставшееся здоровье противника: " << enemyHealth << std::endl;
                std::cout << "Ваше здоровье: " << heroHealth << std::endl;
                break;
            }
            case 2: {
                if (heroArmor >= enemyDamage) {
                    std::cout << "Вам удалось защититься!" << std::endl;
                }
                else {
                    std::cout << "Вам не удалось защититься!" << std::endl;
                    int damageTaken = rand() % (enemyDamage + 1);
                    heroHealth -= damageTaken;
                    std::cout << "Нанесен урон: " << damageTaken << std::endl;
                }
                break;
            }
            default: {
                std::cout << "ОШИБКА!!! Вы ввели неверное значение." << std::endl;
            }
            }
            system("pause");
            break;
        }

        case 2: {
            if (enemySpeed >= heroSpeed) {
                std::cout << "Вам не удалось убежать!" << std::endl;
                int damageTaken = rand() % (enemyDamage + 1);
                heroHealth -= damageTaken;
                std::cout << "Нанесен урон: " << damageTaken << std::endl;
            }
            else {
                std::cout << "Вам удалось убежать!" << std::endl;
                fightBool = false;
            }
            break;
        }

        default: {
            std::cout << "ОШИБКА!!! Вы ввели неверное значение." << std::endl;
            break;
        }
        }

        if (enemyHealth <= 0) {
            std::cout << enemyName << " повержен!" << std::endl;
            fightBool = false;
        }
    }
}

// Heal function
void heal(int& heroHealth) {
	std::cout << std::endl;
	std::cout << "Вы использовали зелье лечения!" << std::endl;

	heroHealth += 8;

	std::cout << "Текущее состояние здоровья: " << heroHealth << " HP." << endl;
}

// Statistics
void stats(int& heroHealth, int& heroMana, int& heroAttack, int& heroArmor, int& heroSpeed) {
	std::cout << "## Здоровье: " << heroHealth << " ##" << std::endl;
	std::cout << "## Мана: " << heroMana << " ##" << std::endl;
	std::cout << "## Броня: " << heroArmor << " ##" << std::endl;
	std::cout << "## Скорость: " << heroSpeed << " ##" << std::endl;
	std::cout << "## Урон: " << heroAttack << " ##" << std::endl;

    return;
}

// Quests
void quests() {
	int questSwitch;
	if (getQuest == 0) {
		std::cout << "У вас нету квестов." << std::endl;

		system("pause");
		return;
	}
	else {
		std::cout << "Количество квестов: " << getQuest << std::endl;
		std::cout << "1. Посмотреть квесты" << std::endl;
		std::cout << "2. Выйти." << std::endl;
		std::cin >> questSwitch;
		switch (questSwitch) {
		case 1: {
			std::cout << std::endl << "Ваши квесты: " << std::endl;
			
			int questNumber = 1;
			for (int i = 0; i < 3; ++i) {
				if (questList[i] == true) {
					std::cout << questNumber << ". ";
					switch (i) {
					case 0: {
						std::cout << "Тварь в тоннеле." << std::endl;

						break;
					}
					case 1: {
						std::cout << "" << std::endl;

						break;
					}
					case 2: {
						std::cout << "" << std::endl;
						break;
					}
					}
					questNumber++;
				}
			}

			break;
		}
		case 2: {
			return;
		}
		}
	}
}