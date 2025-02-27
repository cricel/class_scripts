#  create a attribute in student call Money that is default to 0
# create a function in student call "work" which everytime will increase the amount of money by $200
# create a function in student call "buy_pc_space", which gonna cost student 300 to buy 100gb space,
# if money is enough, then increase the space of laptop by 100, if not, work again to get enough money
# create a function in laptop called "add_space" to add space
class Laptop:
    def __init__(self, _brand, _ram, _gpu, _space):
        self.brand = _brand
        self.ram = _ram
        self.gpu = _gpu
        self.space = _space
    def buy_ram(self, _add):
        self.ram = self.ram + _add
    # add_space

class Student:
    def __init__(self, _name, _gpa, _study_hour = 0):
        self.name = _name
        self.gpa = _gpa
        self.study_hour = _study_hour
        self.my_laptop = Laptop("dell", 16, "GTX1080", 120)
        #money
    def study_something(self, _hour = 1):
        self.study_hour = self.study_hour + _hour
    #work
    #buy_pc_space

shawn = Student("shawn", 1.0)
tina = Student("tina", 0.0, 100)
ben = Student("ben", 2.0,)
print(shawn.my_laptop.brand)
print(shawn.my_laptop.ram)
shawn.my_laptop.buy_ram(2)
print(shawn.my_laptop.ram)