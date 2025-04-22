#pragma once
#include "Bicycle.h"

/**
 * @brief ����� MountainBike ������������ ������ ���������.
 *
 * ��������� Bicycle ����������� ��������.
 */
class MountainBike : public Bicycle {
private:
    bool hasSuspension;  // ������� �����������

public:
    /**
     * @brief ����������� ������� ����������.
     * @param brand �������� ������.
     * @param gears ���������� �������.
     * @param suspension ������� ��������.
     */
    MountainBike(const std::string& brand, int gears, bool suspension)
        : Bicycle(brand, gears), hasSuspension(suspension) {
    }

    /**
     * @brief �������� ������� ����������.
     */
    void DescribingVehicle() const override {
        std::cout << "������ ��������� " << brand << " � " << gearCount
            << " ���������� � " << (hasSuspension ? "���������" : "��� ��������")
            << " ����� � �������." << std::endl;
    }
};
