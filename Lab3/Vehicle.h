#pragma once
#include <string>

/**
 * @brief Абстрактный базовый класс Vehicle представляет транспортное средство.
 *
 *  Данный класс обеспечивает получение информации и описания транспортного средства.
 */
class Vehicle {
protected:
    std::string brand;  // Бренд транспортного средства

public:
    /**
     * @brief Конструктор базового транспортного средства.
     * @param brand Название бренда.
     */
    Vehicle(const std::string& brand) : brand(brand) {}

    /**
     * @brief Получить название бренда.
     * @return Название бренда.
     */
    std::string getBrand() const {
        return brand;
    }

    /**
     * @brief Виртуальный метод описания транспортного средства.
     */
    virtual void DescribingVehicle() const = 0;
    /**
    * @brief Виртуальный деструктор.
    */
    virtual ~Vehicle() = default;
};
