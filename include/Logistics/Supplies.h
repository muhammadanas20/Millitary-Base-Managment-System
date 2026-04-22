# pragma once
# include <string>
# include "Equipment.h"

class Supplies : public Equipment {
    private:
        std::string supplyType;
        std::string expirayDate;
        std::string storageLocation;
        int quantity;
        static int totalSupplies;
        
    public:
        Supplies(std::string id, std::string name, std::string type, std::string expiry, std::string location, int qty);

        void saveToFile(std::string fileName);
        void loadFromFile(std::string fileName);

        std::string getEquipmentType() override;
        std::string getEntityType();

        std::string getSupplyType();
        std::string getExpiryDate();
        std::string getStorageLocation();
        int getQuantity();
        int getTotalSupplies();
        void updateQuantity(int change); // adds change in quantity
        void moveToLocation(std::string newLocation); // assign new location to storageLocation
        bool isExpired();

        // all three use quantity to compare or add
        bool operator<(const Supplies& other);
        bool operator==(const Supplies& other);
        Supplies operator+(const Supplies& other);

        void display() override;

        ~Supplies();
};