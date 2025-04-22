#include "ElectricCar.h"
#include "MountainBike.h"
#include <memory>
#include <vector>

int main() {
    // Устанавливаем локаль для корректного отображения русских символов в консоли
    setlocale(LC_ALL, "");

    // Создаём вектор указателей на объекты типа Vehicle (полиморфизм)
    std::vector<std::shared_ptr<Vehicle>> vehicles;

    // Добавляем электромобиль и горный велосипед в список
    vehicles.push_back(std::make_shared<ElectricCar>("Tesla", 450, 85));
    vehicles.push_back(std::make_shared<MountainBike>("Trek", 18, true));

    // Вызываем описание для каждого транспортного средства
    for (const auto& vehicle : vehicles) {
        vehicle->DescribingVehicle();// Полиморфный вызов метода
    }

    return 0;
}
