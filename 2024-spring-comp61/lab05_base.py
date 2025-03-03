"""
Assignment: Classes Interaction (Car and Owner)

Structure:
1. Overview
2. Breakdown
3. Base Code
4. Sample Output

Requirements Recap:
- Car class with attributes make, model, year and a method get_car_info().
- Owner class with attributes name, age, and a list of cars_owned, plus methods
  purchase_car() and show_owned_cars().
- Demonstrate functionality by creating multiple Owners and Cars in the main() function.
"""

# 1. Car Class
class Car:
    def __init__(self, make, model, year):
        """
        TODO: Store make, model, and year as instance variables.
        Example:
            self.make = make
            self.model = model
            self.year = year
        """
        pass

    def get_car_info(self):
        """
        TODO: Return a descriptive string, for example:
              "2010 Toyota Camry"
        """
        pass

# 2. Owner Class
class Owner:
    def __init__(self, name, age):
        """
        TODO: Store name and age.
              Initialize a list to store cars (e.g., self.cars_owned = []).
        """
        pass

    def purchase_car(self, car):
        """
        TODO: Append the passed-in car object to self.cars_owned.
              Print a statement:
              "<owner_name> just purchased a <car_info>."
        """
        pass

    def show_owned_cars(self):
        """
        TODO: If no cars are owned, print a message:
              "<owner_name> doesn't own any cars yet."
              Otherwise, print each car's info in a loop.
        """
        pass


# 3. Main Demonstration Function
def main():
    """
    Steps to implement here:
      - Create multiple Owner objects (owner1, owner2, etc.).
      - Create multiple Car objects (car1, car2, car3, etc.).
      - Let each Owner purchase at least two Cars.
      - Use show_owned_cars() to verify the purchases.
    """
    pass


# 4. Execution
if __name__ == "__main__":
    main()
