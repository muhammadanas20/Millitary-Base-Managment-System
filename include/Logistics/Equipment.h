# pragma once
# include <string>

class Equipment {
    private:
        std::string equipmentName;
        std::string condition;
        std::string acquisitionDate;

    public:
        Equipment(std::string id, std::string name, std::string cond);
        // what does id assigned to ?

        virtual void display() = 0;
        virtual std::string getEquipmentType() = 0;

        std::string getEquipmentName() const;
        std::string getCondition();
        std::string getAcquisitionDate();

        void setCondition(std::string newCondition);

        std::string getLogEntry();

        virtual ~Equipment();
};