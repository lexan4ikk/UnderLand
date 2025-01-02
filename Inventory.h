#include <iostream>
#include <vector>
#include <tuple>
#include "Items.h"
#pragma once

typedef std::tuple<std::string, int, void(*)()>(item);
typedef std::vector<item>(inventory);
inventory userInventory;

inventory* GetInventory() {
    return &userInventory;
}

int GetCountOfItem(std::string itemName) {
    for (int i = 0; i < GetInventory()->size(); i++) {
        if (std::get<0>(GetInventory()->at(i)) == itemName) {
            return std::get<1>(GetInventory()->at(i));
        }
    }

    return 0;
}

void AddItem(std::string itemName, int count, void(*func)()) {
    if (GetCountOfItem(itemName) > 0) {
        for (int i = 0; i < GetInventory()->size(); i++) {
            if (std::get<0>(GetInventory()->at(i)) == itemName) {
                std::get<1>(GetInventory()->at(i)) += count;
                return;
            }
        }
    }
    GetInventory()->push_back(item(itemName, count, func));
}

void RemoveItem(std::string itemName, int count) {
    if (GetCountOfItem(itemName) == 0) {
        return;
    }

    if (GetCountOfItem(itemName) > count) {
        for (int i = 0; i < GetInventory()->size(); i++) {
            if (std::get<0>(GetInventory()->at(i)) == itemName) {
                std::get<1>(GetInventory()->at(i)) -= count;
                return;
            }
        }
    }

    for (int i = 0; i < GetInventory()->size(); i++) {
        if (std::get<0>(GetInventory()->at(i)) == itemName) {
            GetInventory()->erase(GetInventory()->begin() + i);
        }
    }
}

void UseItem(std::string itemName) {
    if (GetCountOfItem(itemName) == 0) {
        return;
    }

    for (int i = 0; i < GetInventory()->size(); i++) {
        if (std::get<0>(GetInventory()->at(i)) == itemName) {
            std::get<2>(GetInventory()->at(i))();
            return;
        }
    }

    RemoveItem(itemName, 1);
}

void OutputInventory() {
    for (int i = 0; i < GetInventory()->size(); i++) {
        std::cout << "Предмет " << i << ": ";
        std::cout << std::get<0>(GetInventory()->at(i)) << " = " << std::get<1>(GetInventory()->at(i));
        std::cout << "\n";
    }
}