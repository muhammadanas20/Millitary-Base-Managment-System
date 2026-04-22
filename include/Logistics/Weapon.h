# pragma once
# include <string>
# include "Equipment.h"

class Weapon : public Equipment {
    private:
        std::string caliber; // the caliber given is foramt such as 9mm, first the digit than the unit of measurement
        std::string fireMode;
        int currentAmmunition;
        int maxAmmunitionCapacity;
        static int totalWeapons;

    public:
        Weapon(std::string id, std::string name, std::string caliber, std::string fireMode, int maxAmmo);

        void saveToFile(std::string fileName);
        void loadFromFile(std::string fileName);

        void fireWeapon(int rounds);
        void reload(int roundsAdded);
        void unloadAmmo();

        std::string getEquipmentType() override;
        std::string getEntityType();
        std::string getCaliber();
        std::string getFireMode();
        int getCurrentAmmunition();
        int getMaxAmmunitionCapacity();
        int getTotalWeapons();

        bool operator<(Weapon& other);
        bool operator==(Weapon& other);
        Weapon operator+(Weapon& other);

        void display() override;
        
        ~Weapon();
};