#include "Library.h"
#define Dialogues
#include "Game.h"
#include "Inventory.h"
#include "Quests.h"
#include "Items.h"

extern int heroHealth, heroAttack, heroMana, heroSpeed, heroArmor, getQuest;
extern bool questList[];

using namespace std;

void notlheimTavern() {
    cout << std::endl << "***  �� ���������� � �������  ***" << endl;
    cout << std::endl << "� ���� ����� ����� ����� ������� ������� � �����. � ���� � ������ ����� ������ � ����� ������� ������. ������ �� ��� ��� ��� ������." << endl;
    cout << "���� ����� ������, ��� ��������, ��������� � ����� �� ������� ��������. � ��� ������ ������ ������� ���������, ����������� � ���� ������ ���, " << endl;
    cout << "����������� ������������ � ����������� ����� �������������� ������������ ������ �����. ����� ������ ������ ������� ����. ��� �������������� ���� ����� ��-�������: " << endl;
    cout << "� ����� ������ ���������� �������, � ������ ������������ ������� ������, ������ ������� ��������������." << endl;

    system("pause");

    bool tavernBool = true;
    while (tavernBool) {
        int tavern;
        cout << "###  �������� ��������:  ###" << endl;
        cout << "1. ������� � ������ ������." << endl;
        cout << "2. ������� � ��������." << endl;
        cout << "3. ������� � �������." << endl;
        cout << "4. ����." << std::endl;
        cin >> tavern;

        switch (tavern) {
        case 1: {
            cout << "������� � ������ ������, � ����������." << endl;
            system("pause");

            bool innkeeperBool = true;
            while (innkeeperBool) {
                int tavernSwitch;
                cout << "###  �������� ��������:  ###" << endl;
                cout << "1. ������� ������� ���������." << endl;
                cout << "2. ������� ����� � ����� ������� �����������." << endl;
                cout << "3. ��������� �����������." << endl;
                cout << "4. ����." << endl;
                cin >> tavernSwitch;

                switch (tavernSwitch) {   // Innkeeper
                case 1: {
                    std::cout << "������������� �� ������, � ����� �������������." << std::endl;
                    system("pause");

                    int drinkChoice;
                    std::cout << "###  �������� ��������:  ###" << std::endl;
                    std::cout << "1. ������� ����� ���." << std::endl;
                    std::cout << "2. ������� ������� �����." << std::endl;
                    std::cout << "3. ������� ������� ������." << std::endl;
                    std::cin >> drinkChoice;

                    switch (drinkChoice) {
                    case 1:
                        cout << "������ ��������� ��� � �������� ����� ��� � ������� �� �������." << endl;

                        AddItem("����� ���", 1, pintOfEl);
                        cout << "� ���������� �������� ����� �������!" << endl;
                        cout << "������� 1 ��� ���������." << endl;
                        cin >> tavernSwitch;
                        if (tavernSwitch == 1) {
                            OutputInventory();
                            system("pause");
                        }

                        break;
                    case 2:
                        cout << "������ ��������� ��� � �������� ������� ����� � ������� �� �������." << endl;

                        AddItem("������� �����", 1, bottleOfVodka);
                        cout << "� ���������� �������� ����� �������!" << endl;
                        cout << "������� 1 ��� ���������." << endl;
                        cin >> tavernSwitch;
                        if (tavernSwitch == 1) {
                            OutputInventory();
                            system("pause");
                        }

                        break;
                    case 3:
                        cout << "������ ��������� ��� � �������� ������� ������ � ������� �� �������." << endl;

                        AddItem("������� ������", 1, bottleOfBrendy);
                        cout << "� ���������� �������� ����� �������!" << endl;
                        cout << "������� 1 ��� ���������." << endl;
                        cin >> tavernSwitch;
                        if (tavernSwitch == 1) {
                            OutputInventory();
                            system("pause");
                        }

                        break;
                    default:
                        cout << "������!!! �� ����� �������� ��������." << endl;
                        continue;
                    }
                    break;
                }
                case 2: {
                    cout << "������� ������� � �������� � ������ �������� ��������, � ������:" << endl << endl;;
                    cout << "- ������, ��� �������, �� �� ���� ���� ��������, � ���� ���� �� ��� ���������?" << endl;
                    system("pause");

                    cout << "- ����?" << endl;
                    system("pause");

                    cout << "- ����, ����� ���������� ���� �� ����. ��� �� �������?" << endl;
                    system("pause");

                    cout << "- �� ��, ��������, �������. �� �� ���� ����� ������ ��������!" << endl;
                    system("pause");

                    enemy("�������", 15, 3, 0, heroHealth, heroMana, heroAttack, heroArmor, heroSpeed);
                    break;
                }
                case 3: {
                    notlheimInnkeeper();
                    break;
                }
                case 4: {
                    innkeeperBool = false;
                    break;
                }
                default: {
                    cout << "������!!! �� ����� �������� ��������." << endl;
                    break;
                }
                }
            }
            break;
        }
        case 2: {   // Officers
            cout << "������� � �������� ������� �����, ��� ����� �������� �� ���� ��������." << endl;
            system("pause");

            bool officerBool = true;

            while (officerBool == true) {
                cout << "���� ����, ������?" << endl << endl;
                cout << "###  �������� �������� ������: ###" << endl;
                cout << "1. ���� ������� ���-�� �������� ��� ����� ���������." << endl;
                cout << "2. ��� �� ������ ������� ��� ������� �����?" << endl;
                cout << "3. ��� �������, �� ������ ����� � ���� ���������..." << endl;
                cout << "4. ����." << endl;
                cin >> tavern;

                switch (tavern) {
                case 1: {
                    cout << "�� ��� �� ���, ������ ������� ���� ����. � ��� � ������������ �������� ����� �����, ������� ��������� ����������� � ���� � �����. �������� ���� ������, ���������, ��� ��� ����������. ��� ���� � ��� �� ���������." << endl;
                    cout << "���� �� ������, ���� �� �� ������ ���� � ���������, ��� ��� ����������, � ��� �����, ���� �� ���������� �� ���� ��������. ��� ������� �� ����������, �� �����." << endl;

                    system("pause");
                    cout << "###  �������� �������� ������: ###" << endl;
                    cout << "1. � ��������." << endl;
                    cout << "2. ���, �������." << endl;
                    cin >> tavern;

                    if (tavern == 1) {
                        cout << "������� ����� �����!" << endl;
                        getQuest++;
                        questList[0] = true;

                        system("pause");
                        cout << "��� �������, ������! ��� ���������, ������� � ��������, �� ����� ���." << endl;
                    }
                    else if (tavern == 2) {
                        cout << "�� ��� ������..." << endl;
                        system("pause");
                        cout << "����� ���� ����, � ������ �������." << endl;
                    }

                    break;
                }
                case 2: {
                    std::cout << std::endl << "�� ��� � ���� �������... � ����� ���� ����� ���������� ������ ��������, ���� ��. ������������� ��� � �������� ��� ��������� ���� �������." << std::endl;
                    std::cout << "�� ����, ���� �� ��� �������, ��������, ��������, �� ����� � �� ��������. ������ ���� ���������� ����������, � ������ ������ ������." << std::endl;
                    std::cout << "���������� ���������� ��� ������������� ������������������. ������� �����, ����� ������� ������ �� ����������, �������� ��� ����� �� �����, ������� ���� � �������� ����." << std::endl;
                    std::cout << "��� ���������� ��������� �� �����, ���� ������. ����� ����� ������������� ���� �����������. ��� ������ �������� ��� ������������� �����, ��������� ����������" << std::endl;
                    std::cout << "������, ������ ��������� � ������� ����������, ���������� ������ ������ � �� � ���� ����." << std::endl << std::endl;

                    system("pause");

                    std::cout << std::endl << "���������� ����������� ������� � ��� � ���� ��������. ������ ��� ����� ���� ������������� � �, �� ���� ������ ����������. ����� ������������� �������� ������ �������������," << std::endl;
                    std::cout << "�������� �������� ����������, ������ �������� � ���� ������� ��������. ���� ����� �������� ���������� � ������� �� ���� ����� ������, ������� �������� � ��� ����� ������" << std::endl;
                    std::cout << "� ������� �� ����� ����������. �� ���� ���." << std::endl << std::endl;

                    system("pause");
                    break;
                }
                case 3: {
                    std::cout << std::endl << "- ������, �� ��� ���?" << std::endl;
                    system("pause");

                    std::cout << std::endl << "- �� � ���� ���? ����� ����� �� ��������� ����� �������?" << std::endl;
                    system("pause");

                    std::cout << std::endl << "- ���� �� ������ �� �� ������, ��� �������� ��������� ����..." << std::endl;
                    system("pause");

                    std::cout << std::endl << "- ���, ��� �� ������, ��� ������ ����� ����� ����� � ���� ������� ����." << std::endl;
                    system("pause");

                    enemy("����������� ����� ����������", 20, 8, 2, heroHealth, heroMana, heroAttack, heroArmor, heroSpeed);
                    break;
                }
                case 4: {
                    officerBool = false;

                    break;
                }
                default: {
                    std::cout << "������!!! �� ����� �������� ��������." << std::endl;
                    break;
                }
                       break;
                }
            }
        }
        case 3: {    // Workers
            std::cout << "������� � ������� �������, � ��� ����� ������� ������� ���� � �������� ���." << std::endl << endl;

            system("pause");

            bool tavernWorkers = true;

            while (tavernWorkers == true) {
                cout << "###  �������� ��������:  ###" << endl;
                cout << "1. �������� �����." << endl;
                cout << "2. ����." << endl;
                cin >> tavern;

                bool dialogueWithWorkers = true;
                while (dialogueWithWorkers == true) {
                    switch (tavern) {
                    case 1: {
                        cout << "1. �������� ��� ������� ������� �����." << endl;
                        cout << "2. ������ ��� �������� ��������� ������." << endl;
                        cout << "3. ������ ���." << endl;
                        cout << "4. ����." << endl;
                        cin >> tavern;
                        switch (tavern) {
                        case 1: {
                            cout << "�� ��� �� ����� �������... ��� ����� �����. ������ �������: ���-����� ������� ������. ��� ���� ����, ��� ������ ��� � ������. ��������� �� ���" << endl;
                            cout << "������ ���� �� ����� �������� � ������� ����. ������ ������� ��������� ����... �� ��� � �� ������ �������! � ���� �����, ������� �����, ���� ��� ���� �����," << endl;
                            cout << "� �� ���� ������ ��� � ������ �������! ���� ��� ��� �����������..." << endl;

                            system("pause");

                            cout << "###  �������� �������� �������:  ###" << endl;
                            cout << "1. � ��� �� ����� ������ ������ �������������?" << endl;
                            cout << "2. ������ ����� ���� ������� ��������?" << endl;
                            cout << "3. ����." << endl;
                            cin >> tavern;

                            switch (tavern) {
                            case 1: {
                                cout << "����� ������ ��� ������������� � ������� ��� � ���� �������. ���, ���� ���� �� ����� ���������� �� ����� ������. ����� ���� ��� ������� �� �������" << endl;
                                cout << "������� ������ � �����. ����� � ����� �������. � ��� ��� ������ ��� ���� ������. �� ������ ���-���� ������� � ������. ���� �� ����� �������, �� �������" << endl;
                                cout << "������� �������. ���� ������� ������ ���� �� ���� �� ��������. �������� ���-�� ����� ��������� ���������� ���! ������ ��� �������, ������� ��� ����� �" << endl;
                                cout << "� ������ ��� ������ ������. � �����, ����� ���� ���� ����, ��� �����-�� ������ ������ � ��������� �������� ������ ����� �������, ������� ��� ��������, �" << endl;
                                cout << "������� ���� ����� ���. � ��� ��� �� � ��� � �����..." << endl << endl;

                                system("pause");
                                break;
                            }
                                case 2: {
                                cout << "� ������ ��� ������� ��� ������� ����, ���������. � ������������� ����� ��������� ����� �� ������� ��������� ��� ����� ��� � �� �������� ����� � �������." << endl;
                                cout << "������� �� ���� �� ������� � ��� ����� ������ ���������. �������������� ��� ��������. ��� ������� ���� �����, �� ����� ��������..." << endl << endl;

                                system("pause");
                                break;
                            }
                            case 3: {
                                dialogueWithWorkers = false;

                                break;
                            }
                            }

                            break;
                        }
                        case 2: {
                            cout << "��� � ������ ������ �����. ��� �� �������, ������� ��� ������ �����, ������ ��� � ������, ��� ������ ����� ������ � �����. �� ��� �� ���." << endl;
                            cout << "��������� ������, ���� ��������, ���� ������� �� ������� ��� ������ �� ����, ����� ������� �� ��������, ����� ������� ��� ������� ������ �� ����� �����������." << endl;
                            cout << "�� �������� � ��� � �������. ������� ���� ������ ���������� ��-�� ���� ��� ��� ���� ������ � ������ ������ �� �������, �� ������ � ����� ������." << endl;
                            cout << "� ����� ����� ������� ������� ������, ����� �� ������ �� ������ � ������� �� ��� ������� �������. ����� ���� �����... ��� ���� ����� ��� �������� ���, ��� ��� ������." << endl;
                            cout << "��������, ��� ��� ��� ����� ���� �� ��������� ���� ������. � ������ �� ������, ������ ��� ��� ������� ��� �������� � ����� ������ ������������������� �������." << endl;

                            system("pause");

                            break;
                        }

                        case 3: {
                            cout << "������ ���� ������� ������ �������� � � ������� ������� �����-�������� ������������ �������, � ������������ ������ ���." << endl;

                            cout << "�� ������ ���!" << endl;
                            cout << "��������: + 2" << endl;

                            heroHealth += 2;

                            if (heroHealth >= 20) {
                                heroHealth = 20;
                            }
                         
                            system("pause");

                            break;
                        }
                        case 4: {
                            dialogueWithWorkers = false;

                            break;
                        }
                        }
                        break;
                    }

                    case 2: {
                        tavernWorkers = false;
                    }
                    }
                break;
                }
            }
        }
        case 4: {
            tavernBool = false;
            break;
        }
        default: {
            cout << "������!!! �� ����� �������� ��������." << endl;
            break;
        }
        }
        }
        }
 

void notlheimBarracks() {

}

void notlheimTunnels() {
	if (questList[0] == true) {
		cout << "������� ������� � �����������, �� ���� ���� ������ ���� ����������, ���������� ���� � ����, ���������������, ��� ������ ���� ���������." << endl;

		system("pause");

		int tunnels;
		cout << "###  �������� ��������:  ###" << endl;
		cout << "1. ������� � ������." << endl;
		cout << "2. ����." << endl;
		cin >> tunnels;

		switch (tunnels) {
		case 1: {
			cout << "���� ����, ������?" << endl;

			system("pause");

			cout << "###  �������� �������� ������ : ###" << endl;
			cout << "1. ��� �������� �������, ������, ��� ��������� � ��� � ����������." << endl;
			cin >> tunnels;
			if (tunnels == 1) {
				cout << "������ ����, ��������. ������� ����� ��� ������� ������ ������ � �����. �� ��� �� ��� �������, �� ��� �������." << endl;

				cout << "!!!  �������������� ����� �������  !!!" << endl;
				cout << "��������� ����������." << endl;

				cout << "����� �� ���������� �������, ������ ���� ���������� � ������� ��������� ����� ������." << endl;

				system("pause");

				cout << "�� ������, ��� ���� ����������." << endl;

				AddItem("����� ��������", 2, healingPotion);
				cout << "� ��������� �������� ����� �������!" << endl;
				cout << "������� 1 ��� ���������." << endl;
				cin >> tunnels;
				if (tunnels == 1) {
					OutputInventory();
					system("pause");
				}
				cout << "���� ����� ����������� � ���� ������ �������, � �������� ������, �� ������� ������������." << endl;

				tunnelQuest();
				break;
			}
		}
		case 2: {
			return;

			break;
		}
		}
	}
}