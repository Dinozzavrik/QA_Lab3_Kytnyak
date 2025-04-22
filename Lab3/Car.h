#pragma once
#include "Vehicle.h"
#include <iostream>

/**
 * @brief Класс Car представляет легковой автомобиль.
 *
 * Наследует Vehicle и добавляет информацию о мощности двигателя.
 *
 */
class Car : public Vehicle {
protected:
    int horsepower;  // Мощность двигателя

public:
    /**
     * @brief Конструктор автомобиля.
     * @param brand Название бренда.
     * @param horsepower Мощность в л.с.
     */
    Car(const std::string& brand, int horsepower)
        : Vehicle(brand), horsepower(horsepower) {
    }

    /**
     * @brief Описание легкового автомобиля.
     */
    void DescribingVehicle() const override {
        std::cout << "Автомобиль " << brand << " запускается с мощностью "
            << horsepower << " л.с." << std::endl;
    }
};
