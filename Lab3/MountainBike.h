#pragma once
#include "Bicycle.h"

/**
 * @brief Класс MountainBike представляет горный велосипед.
 *
 * Расширяет Bicycle добавлением подвески.
 */
class MountainBike : public Bicycle {
private:
    bool hasSuspension;  // Наличие амортизации

public:
    /**
     * @brief Конструктор горного велосипеда.
     * @param brand Название бренда.
     * @param gears Количество передач.
     * @param suspension Наличие подвески.
     */
    MountainBike(const std::string& brand, int gears, bool suspension)
        : Bicycle(brand, gears), hasSuspension(suspension) {
    }

    /**
     * @brief Описание горного велосипеда.
     */
    void DescribingVehicle() const override {
        std::cout << "Горный велосипед " << brand << " с " << gearCount
            << " передачами и " << (hasSuspension ? "подвеской" : "без подвески")
            << " готов к поездке." << std::endl;
    }
};
