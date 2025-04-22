#pragma once
#include "Vehicle.h"
#include <iostream>

/**
 * @brief ����� Car ������������ �������� ����������.
 *
 * ��������� Vehicle � ��������� ���������� � �������� ���������.
 *
 */
class Car : public Vehicle {
protected:
    int horsepower;  // �������� ���������

public:
    /**
     * @brief ����������� ����������.
     * @param brand �������� ������.
     * @param horsepower �������� � �.�.
     */
    Car(const std::string& brand, int horsepower)
        : Vehicle(brand), horsepower(horsepower) {
    }

    /**
     * @brief �������� ��������� ����������.
     */
    void DescribingVehicle() const override {
        std::cout << "���������� " << brand << " ����������� � ��������� "
            << horsepower << " �.�." << std::endl;
    }
};
