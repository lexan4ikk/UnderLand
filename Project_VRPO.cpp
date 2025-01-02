#include "Lore.h"
#include "Dialogues.h"
#include "Sublocations.h"
#include "Game.h"
#include "Inventory.h"
#include "Items.h"

using namespace std;

int heroHealth = 20;
int heroAttack = 5;
int heroMana = 15;
int heroSpeed = 10;
int heroArmor = 7;

int getQuest = 0;
bool questList[] = { 0, 0, 0 };

int main() {
    setlocale(LC_ALL, "RU");
    system("color A1");
    
    int k;
    
    cout << "####  Добро пожаловать в UnderLand!  ####" << endl;
    cout << "Выберите следующие действия: " << endl;
    
    cout << "1. Начать игру." << endl;
    cout << "2. Предыстория." << endl;
    cout << "3. Выйти из игры." << endl;
    cin >> k;

    // Start
    switch (k) {
    case 1: {
        cout << endl << "Очнувшись от невыносимой головной боли, я быстро осмотрел себя. Все было на месте: рюкзак с припасами, меч, одежда. Единственно что мелькал светом уличных фонарей Нотльхейм. " << endl;
        cout << "Значит точка назначения достигнута. Отряхнувшись я встал и обнаружил, что не хватало одной вещи. И это была карта старых дорог Нотльхейма. Мда уж, без нее будет туго, но да ладно. " << endl;
        cout << "Я двинулся вперед, рассматривая практически кромешную темноту, а также сорняки разной формы, выросшие из дороги двухста летней давности. Подойдя к ветхим воротам, я оглянулся, удостоверившись, что за мной никто не следит и " << endl;
        cout << "позвал охрану." << endl;

        system("pause");

        int notlheimWarrior;
        cout << "###  Выберите действия:  ###" << endl;
        cout << "1. Обратиться к страже на стенах." << endl;
        cin >> notlheimWarrior;

        switch (notlheimWarrior) {
        case 1: {
            cout << "Чего тебе парень?" << endl;
            
            system("pause");

            cout << "###  Выберите варианты ответа : ###" << endl;
            cout << "1. Можете ли вы меня впустить?" << endl;
            int gialogueWithNotlheimGuard;
            cin >> gialogueWithNotlheimGuard;
            switch (gialogueWithNotlheimGuard) {
            case 1: {
                cout << endl;
                cout << "Сперва скажи кто ты, а потом может быть и впустим." << endl;

                system("pause");

                cout << "###  Выберите варианты ответа : ###" << endl;
                cout << "1. Я путешественник." << endl;
                cout << "2. Я воин." << endl;
                cin >> gialogueWithNotlheimGuard;
                switch (gialogueWithNotlheimGuard) {
                case 1: {
                    cout << "Как так получилось, что ты забрел в такие дебри Андерленда? Или ты специально сюда явился, чтобы поиздеваться над нами?" << endl;

                    system("pause");

                    cout << "###  Выберите варианты ответа : ###" << endl;
                    cout << "1. На меня напали культисты и отобрали карту. Ближайший населенный пункт был выш город. Вот я и тут." << endl;
                    
                    cin >> gialogueWithNotlheimGuard;

                    cout << "Мда уж, странно, что не съели. Они любят такое практиковать. Незавидная у тебя судьба. Ну ладно, парень, проходи. Только херни не твори, а то такие как ты на такое способны." << endl;
                    cout << endl;

                    system("pause");

                    cout << "** Открыта новая локация! **" << endl;
                       
                    break;
                }
                case 2: {
                    cout << "Позволь тогда задать вопрос. Что ты тут забыл?" << endl;

                    system("pause");
                    
                    cout << "###  Выберите варианты ответа : ###" << endl;
                    cout << "1. Заблудился." << endl;
                    cout << "2. Прибыл на задание из столицы." << endl;
                    cin >> gialogueWithNotlheimGuard;

                    switch (gialogueWithNotlheimGuard) {
                    case 1: {
                        cout << "Неплохо ты заблудился дружок. Не кажется ли тебе, что ты пытаешься нас обмануть? От Нотльхейма до той же столицы 9 главных дорог, я уже молчу про старые." << endl;

                        system("pause");

                        cout << "###  Выберите варианты ответа : ###" << endl;
                        cout << "1. Нет, мне так не кажется, потому что я говорю правду." << endl;
                        cin >> gialogueWithNotlheimGuard;

                        switch (gialogueWithNotlheimGuard) {
                        case 1: {
                            cout << "Хм, говоришь убедительно. Так и быть, проходи." << endl;
                            break;
                        }
                              break;
                        }
                    break;
                    }

                    case 2: {
                        cout << "Проходи..." << endl;
                        break;
                    }
                    }
                    break;
                }
                }

            break;
            }
                  break;
            }
            break;
            {
            default:
                break;
            }

        break;
        }
              break;
        }
        break;
    }

    case 2: {
        background();

        system("pause");
        main();
        break;
    }

    case 3: {
        exit(EXIT_SUCCESS);
            break;
    }
    }

    // City of Notlheim
    string cityOfNotlheim = "Город Нотльхейм";
    string outskirtsOfTheCityOfNotlheim = "Окрестности Нотльхейма";
    cout << endl << "ВЫ ПРИБЫВАЕТЕ В НОТЛЬХЕЙМ!" << endl;
    cout << endl;

    cout << "Кроме запах мочи и крови, спящих наркоманов и попрошаек, которые давно потеряли веру в светлое будущее здесь ничего не было. " << endl;
    cout << "Максимум тела повешенных бедняг, которых осудили, вероятно, за мелкое воровство или измену, укарашали главный вход в этот захолустный городок." << endl;

    system("pause");

    bool notlheimBool = true;
    while (notlheimBool == true) {
    cout << "###  Выберите действия:  ###" << endl;
    cout << "1. Пойти в трактир." << endl;
    cout << "2. Пойти в казармы." << endl;
    cout << "3. Подойти к страже." << endl;
    if (questList[0] == true) {
        cout << "4. Пойти к канализации." << endl;
    }
    cout << "9. Другое." << endl;
    int notlheim;
    cin >> notlheim;

        switch (notlheim) {
        case 1: {
            notlheimTavern();
            break;
        }

        case 2: {
            notlheimBarracks();
            break;
        }

        case 3: {
            notlheimTower();
            break;
        }
        case 4: {
            notlheimTunnels();
            break;
        }

        case 9: {
            cout << endl << "###  Выберите действия:  ###" << endl;
            cout << "1. Инвентарь." << endl;
            cout << "2. Статистика персонажа." << endl;
            cout << "3. Квесты." << endl;
            cout << "4. Главное меню." << endl;
            cin >> notlheim;

            switch (notlheim) {
            case 1: {
                OutputInventory();

                break;
            }
            case 2: {
                stats(heroHealth, heroMana, heroAttack, heroArmor, heroSpeed);

                break;
            }
            case 3: {
                quests();

                break;
            }
            case 4: {
                main();

                break;
            }
            }

            break;
        }
        break;
        }
    }
}
