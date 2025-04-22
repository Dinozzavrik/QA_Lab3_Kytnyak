#pragma once
#include "Car.h"
#include <iostream>

/**
 * @brief ����� ElectricCar ������������ �������������.
 *
 * ��������� Car � ��������� ������� ������� � ��������� ����� ������.
 */
class ElectricCar : public Car {
private:
    int batteryCapacity;  //������� ������� � ����

public:
    /**
     * @brief ����������� �������������.
     * @param brand �������� ������.
     * @param horsepower �������� � �.�.
     * @param battery ������� �������.
     */
    ElectricCar(const std::string& brand, int horsepower, int battery)
        : Car(brand, horsepower), batteryCapacity(battery) {
    }

    /**
     * @brief �������� ������������� � �������� ������� ������.
     */
    void DescribingVehicle() const override {
        // ������� ���������� � �������
        std::cout << "������������� " << brand << " � �������� " << batteryCapacity
            << " ���� � ��������� " << horsepower
            << " �.�. ����������� ��������." << std::endl;

        // ��������� � ������� ��������� ����� ������ �� ������ �������
        double time = estimateDriveTime();
        std::cout << "��������� ����� ������ �� ������ �������: "
            << time << " �����." << std::endl;
    }

    /**
    * @brief ������������ ��������� ����� ������ ������������� ��� ������ �������.
    * @param consumptionRate ������� ����������� ������� (���� � ���). �� ��������� 20.0.
    * @return ����� � �����, �� ������� ������� ������ �������.
    *
    * ��� �������� ����������� �� �������:
    * \f[
    * \text{����� ������ (����)} = \frac{\text{������� ������� (����)}}{\text{����������� (����/�)}}
    * \f]
    */
    double estimateDriveTime(double consumptionRate = 20.0) const {
        if (consumptionRate <= 0) return 0;
        return static_cast<double>(batteryCapacity) / consumptionRate;
    }
};
