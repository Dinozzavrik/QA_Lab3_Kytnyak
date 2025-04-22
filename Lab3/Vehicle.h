#pragma once
#include <string>

/**
 * @brief ����������� ������� ����� Vehicle ������������ ������������ ��������.
 *
 *  ������ ����� ������������ ��������� ���������� � �������� ������������� ��������.
 */
class Vehicle {
protected:
    std::string brand;  // ����� ������������� ��������

public:
    /**
     * @brief ����������� �������� ������������� ��������.
     * @param brand �������� ������.
     */
    Vehicle(const std::string& brand) : brand(brand) {}

    /**
     * @brief �������� �������� ������.
     * @return �������� ������.
     */
    std::string getBrand() const {
        return brand;
    }

    /**
     * @brief ����������� ����� �������� ������������� ��������.
     */
    virtual void DescribingVehicle() const = 0;
    /**
    * @brief ����������� ����������.
    */
    virtual ~Vehicle() = default;
};
