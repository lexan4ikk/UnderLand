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

    std::cout << "!!!  �� ��� �����: " << enemyName << "  !!!" << std::endl;
    std::cout << "||| ��������: " << enemyHealth << "." << std::endl;
    std::cout << "||| ����: " << enemyDamage << "." << std::endl;

    system("pause");

    bool fightBool = true;
    while (fightBool) {
        std::cout << std::endl;
        std::cout << "###  �������� ��������� ��������:  ###" << std::endl;
        std::cout << "1. ���������." << std::endl;
        std::cout << "2. ������." << std::endl;
        int fight;
        std::cin >> fight;

        switch (fight) {
        case 1: {
            std::cout << "###  �������� ��������:  ###" << std::endl;
            std::cout << "1. ���������." << std::endl;
            std::cout << "2. ������." << std::endl;
            int fightOption;
            std::cin >> fightOption;

            switch (fightOption) {
            case 1: {
                int damageDealt = rand() % (heroAttack + 1);
                enemyHealth -= damageDealt;

                // ���� �������� ����
                int chance = rand() % 100; // 0-99
                int receivedDamage = 0;
                if (chance < 50) { // 50% ���� �������� ����
                    receivedDamage = rand() % (enemyDamage + 1);
                    heroHealth -= receivedDamage;
                    std::cout << "�� �������� ����: " << receivedDamage << std::endl;
                }
                else {
                    std::cout << "�� �� �������� ����." << std::endl;
                }

                std::cout << "�� ������� ����: " << damageDealt << std::endl;
                std::cout << "���������� �������� ����������: " << enemyHealth << std::endl;
                std::cout << "���� ��������: " << heroHealth << std::endl;
                break;
            }
            case 2: {
                if (heroArmor >= enemyDamage) {
                    std::cout << "��� ������� ����������!" << std::endl;
                }
                else {
                    std::cout << "��� �� ������� ����������!" << std::endl;
                    int damageTaken = rand() % (enemyDamage + 1);
                    heroHealth -= damageTaken;
                    std::cout << "������� ����: " << damageTaken << std::endl;
                }
                break;
            }
            default: {
                std::cout << "������!!! �� ����� �������� ��������." << std::endl;
            }
            }
            system("pause");
            break;
        }

        case 2: {
            if (enemySpeed >= heroSpeed) {
                std::cout << "��� �� ������� �������!" << std::endl;
                int damageTaken = rand() % (enemyDamage + 1);
                heroHealth -= damageTaken;
                std::cout << "������� ����: " << damageTaken << std::endl;
            }
            else {
                std::cout << "��� ������� �������!" << std::endl;
                fightBool = false;
            }
            break;
        }

        default: {
            std::cout << "������!!! �� ����� �������� ��������." << std::endl;
            break;
        }
        }

        if (enemyHealth <= 0) {
            std::cout << enemyName << " ��������!" << std::endl;
            fightBool = false;
        }
    }
}

// Heal function
void heal(int& heroHealth) {
	std::cout << std::endl;
	std::cout << "�� ������������ ����� �������!" << std::endl;

	heroHealth += 8;

	std::cout << "������� ��������� ��������: " << heroHealth << " HP." << endl;
}

// Statistics
void stats(int& heroHealth, int& heroMana, int& heroAttack, int& heroArmor, int& heroSpeed) {
	std::cout << "## ��������: " << heroHealth << " ##" << std::endl;
	std::cout << "## ����: " << heroMana << " ##" << std::endl;
	std::cout << "## �����: " << heroArmor << " ##" << std::endl;
	std::cout << "## ��������: " << heroSpeed << " ##" << std::endl;
	std::cout << "## ����: " << heroAttack << " ##" << std::endl;

    return;
}

// Quests
void quests() {
	int questSwitch;
	if (getQuest == 0) {
		std::cout << "� ��� ���� �������." << std::endl;

		system("pause");
		return;
	}
	else {
		std::cout << "���������� �������: " << getQuest << std::endl;
		std::cout << "1. ���������� ������" << std::endl;
		std::cout << "2. �����." << std::endl;
		std::cin >> questSwitch;
		switch (questSwitch) {
		case 1: {
			std::cout << std::endl << "���� ������: " << std::endl;
			
			int questNumber = 1;
			for (int i = 0; i < 3; ++i) {
				if (questList[i] == true) {
					std::cout << questNumber << ". ";
					switch (i) {
					case 0: {
						std::cout << "����� � �������." << std::endl;

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