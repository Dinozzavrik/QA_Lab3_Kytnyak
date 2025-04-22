#pragma once
#include "Car.h"
#include <iostream>

/**
 * @brief Класс ElectricCar представляет электромобиль.
 *
 * Наследует Car и добавляет ёмкость батареи и примерное время работы.
 */
class ElectricCar : public Car {
private:
    int batteryCapacity;  //Ёмкость батареи в кВт·ч

public:
    /**
     * @brief Конструктор электромобиля.
     * @param brand Название бренда.
     * @param horsepower Мощность в л.с.
     * @param battery Ёмкость батареи.
     */
    ElectricCar(const std::string& brand, int horsepower, int battery)
        : Car(brand, horsepower), batteryCapacity(battery) {
    }

    /**
     * @brief Описание электромобиля с расчётом времени работы.
     */
    void DescribingVehicle() const override {
        // Выводим информацию о запуске
        std::cout << "Электромобиль " << brand << " с батареей " << batteryCapacity
            << " кВт·ч и мощностью " << horsepower
            << " л.с. запускается бесшумно." << std::endl;

        // Вычисляем и выводим примерное время работы на полной зарядке
        double time = estimateDriveTime();
        std::cout << "Примерное время работы на полной зарядке: "
            << time << " часов." << std::endl;
    }

    /**
    * @brief Рассчитывает примерное время работы электромобиля при полной зарядке.
    * @param consumptionRate Среднее потребление энергии (кВт·ч в час). По умолчанию 20.0.
    * @return Время в часах, на которое хватает заряда батареи.
    *
    * Это значение вычисляется по формуле:
    * \f[
    * \text{Время работы (часы)} = \frac{\text{Ёмкость батареи (кВт·ч)}}{\text{Потребление (кВт·ч/ч)}}
    * \f]
    */
    double estimateDriveTime(double consumptionRate = 20.0) const {
        if (consumptionRate <= 0) return 0;
        return static_cast<double>(batteryCapacity) / consumptionRate;
    }
};
