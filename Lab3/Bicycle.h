#pragma once
#include "Vehicle.h"
#include <iostream>

/**
 * @brief Класс Bicycle представляет велосипед.
 *
 * Наследует Vehicle, не требует топлива.
 */
class Bicycle : public Vehicle {
protected:
    int gearCount;  ///< Количество передач

public:
    /**
     * @brief Конструктор велосипеда.
     * @param brand Название бренда.
     * @param gears Количество передач.
     */
    Bicycle(const std::string& brand, int gears)
        : Vehicle(brand), gearCount(gears) {
    }

    /**
     * @brief Описание велосипеда.
     */
    void DescribingVehicle() const override {
        std::cout << "Велосипед " << brand << " с " << gearCount
            << " передачами начинает движение." << std::endl;
    }
};
