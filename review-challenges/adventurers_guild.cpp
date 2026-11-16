#include <iostream>
#include <string>

int main () {

    std::cout << "Welcome to the Adventurer's Guild!\n";
    int gold = 200;
    int age;

    std::cout << "What is your age?\n";
    std::cin >> age;
    
    std::string guildRank;

    if (age < 12) {
        guildRank = "Guild Status: To young";
        std::cout << "You are to young to register for a rank as an adventurer, please return after your 12th birthday.\n";
        return 0;
    } else if (age <= 14) {
        guildRank = "Guild Status: Apprentice";
    } else if (age <= 17) {
        guildRank = "Guild Status: Novice";
    } else {
        guildRank = "Guild Status: Adeventurer";
    }


    int classChoice;
    std::string characterClass;
    std::cout << "=== ADVENTURER CLASS SELECTION ===\n" << "1. Warrior\n" << "2. Mage\n" << "3. Rogue\n" << "4. Archer\n" << "5. Paladin\n" << "Choose your class (1-5):\n";
    std::cin >> classChoice;

    switch (classChoice) {
        case 1:
        characterClass = "Warrior";
        break;
        case 2:
         characterClass = "Mage";
        break;
        case 3:
         characterClass ="Rogue";
        break;
        case 4:
         characterClass ="Archer";
        break;
        case 5:
         characterClass ="Paladin";
        break;
        default:
        std::cout << "You have selected an invalid class, please try again.\n";
        return 0;
    }

    std::string equipment;
    int equipmentCost;

    switch (classChoice) {
        case 1:
        equipment = "Iron Sword & Shield";
        equipmentCost = 50;
        break;
        case 2:
        equipment = "Apprentice Staff";
        equipmentCost = 75;
        break;
        case 3:
        equipment = "Twin Daggers";
        equipmentCost = 40;
        break;
        case 4:
        equipment = "Longbow & Quiver";
        equipmentCost = 60;
        break;
        case 5:
        equipment = "Blessed Sword & Armor";
        equipmentCost = 90;
        break;
        default:
        std::cout << "You have selected an invalid class, please try again.\n";
        equipmentCost = 0;
        break;
    }

    gold = gold - equipmentCost;

    int additionalPurchaseChoice;
    int additionalPuchaseCost;
    std::string additionalEquipmentName;
    std::cout << "You have " << gold << " gold remaining.\n" << "=== ADDITIONAL PURCHASE MENU ===\n" << "1. Healing Potion: 25\n" << "2. Traveling Supplies: 50\n" 
    << "3. Enchanted Amulet: 100\n" << "4. Rare Artifact: 175\n" << "5. No purchase.\n" << "Choose your purchase (1-5):\n";
    std::cin >> additionalPurchaseChoice;

    switch (additionalPurchaseChoice){
        case 1:
        additionalPuchaseCost = 25;
        additionalEquipmentName = "Healing Potion";
        break;
        case 2:
        additionalPuchaseCost = 50;
        additionalEquipmentName = "Traveling Supplies";
        break;
        case 3:
        additionalPuchaseCost = 100;
        additionalEquipmentName = "Enhchanted Amulet";
        break;
        case 4:
        additionalPuchaseCost = 175;
        additionalEquipmentName = "Rare Artifact";
        break;
        case 5:
        std::cout << "You have chosen not to purchase any additional equipment. Thank you.\n";
        additionalPuchaseCost = 0;
        additionalEquipmentName = "None";
        break;
        default:
        std::cout << "You have made an invalid choice.\n";
        return 0;
    }

    int remainingGold = gold - additionalPuchaseCost;

    if (additionalPurchaseChoice == 5) {
    } else if (remainingGold >= 0) {
        std::cout << "You have chosen to purchase: " << additionalEquipmentName << "\n" << "This leaves you with: " << remainingGold << "\n";
        gold = gold - additionalPuchaseCost;
    } else if (remainingGold < 0) {
        std::cout << "You cannot afford the selected item. You have not been charged.\n";
        additionalEquipmentName = "No purchase completed";
    }

    std::cout << "=== ADVENTURER REGISTRATION COMPLETE ===\n" << "Age: " << age << "\n" << guildRank << "\n" << "Class: " << characterClass << "\n" << "Starting Equipment: " 
    << equipment << "\n" << "Additional Purchase: " << additionalEquipmentName << "\n" << "Remaining Gold: " << gold << "\n" << "Welcome to the Adventurer's Guild!\n";
}