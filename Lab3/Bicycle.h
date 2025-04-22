#pragma once
#include "Vehicle.h"
#include <iostream>

/**
 * @brief ����� Bicycle ������������ ���������.
 *
 * ��������� Vehicle, �� ������� �������.
 */
class Bicycle : public Vehicle {
protected:
    int gearCount;  ///< ���������� �������

public:
    /**
     * @brief ����������� ����������.
     * @param brand �������� ������.
     * @param gears ���������� �������.
     */
    Bicycle(const std::string& brand, int gears)
        : Vehicle(brand), gearCount(gears) {
    }

    /**
     * @brief �������� ����������.
     */
    void DescribingVehicle() const override {
        std::cout << "��������� " << brand << " � " << gearCount
            << " ���������� �������� ��������." << std::endl;
    }
};
