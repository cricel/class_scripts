#include <iostream>
#include <string>
#include <cstdlib>  // For rand(), srand()
#include <ctime>    // For time()

class Car {
public:
    //    TODO: make, model, year, originalPrice, currentPrice, isOwned

    // 2) Constructor: sets originalPrice/currentPrice to 10000, isOwned to false
    //    TODO: Car(const std::string &mk, const std::string &md, int yr) { ... }

    // 3) Method getCarInfo() returning something like "2010 Toyota Camry"
    //    TODO: std::string getCarInfo() { ... }

    // 4) buyCar(double &userMoney)
    //    - If not owned and userMoney >= currentPrice:
    //      - set isOwned = true
    //      - userMoney -= currentPrice
    //      - reduce currentPrice by 10% of originalPrice
    //      - return true
    //    - else return false

    // 5) sellCar(double &userMoney)
    //    - If owned:
    //      - set isOwned = false
    //      - userMoney += currentPrice
    //      - reduce currentPrice by 10% of originalPrice
    //      - return true
    //    - else return false

    // 6) reducePriceByTenPercentOfOriginal()
    //    - currentPrice -= 0.10 * originalPrice
    //    - clamp currentPrice at 0 if it goes negative
};

int main() {
    // Seed random number generator
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // User starts with $100,000
    double userMoney = 100000.0;

    // Create 3 cars, each with an initial price of $10,000
    // TODO: e.g., Car car1("Toyota", "Camry", 2010);
    //             Car car2("Tesla", "Model 3", 2022);
    //             Car car3("Ford", "Mustang", 1967);

    // Perform 10 transactions
    for (int i = 1; i <= 10; ++i) {
        std::cout << "\n--- Transaction " << i << " ---\n";

        // Random index 0 to 2
        int carIndex = std::rand() % 3;
        // Random action 0 = buy, 1 = sell
        int action = std::rand() % 2;

        // TODO: If carIndex == 0, we operate on car1
        //       If carIndex == 1, operate on car2
        //       Else operate on car3

        // For each case, check:
        //   if (action == 0) call buyCar(...)
        //   else call sellCar(...)
        // Print messages accordingly

        // Print updated user balance
    }

    // Final Report
    std::cout << "\n\n--- Final Report After 10 Transactions ---\n";
    // Print userMoney
    // Print each car's originalPrice, currentPrice, and ownership status
    // TODO

    return 0;
}
