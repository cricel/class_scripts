# create a new class call Student with attrribute
#     name, gpa, study_hour
#     by default, the study hour of each person should be 0
#     and you should able to use init function to init variables
# create a function that take additional argument to increase the
# study hour by whatever the argument is pass into it, if no hour
# argument is pass into it, it will default to increase 1 hour every
# time it runs
# create a another function to calculate the GPA as study hour * 10
# create 3 student, make they study sometime and print out their gpa

class Student:
    def __init__(self, _name, _gpa, _study_hour = 0):
        self.name = _name
        self.gpa = _gpa
        self.study_hour = _study_hour
    def study_something(self, _hour = 1):
        self.study_hour = self.study_hour + _hour

    def calGPA(self):
        self.gpa = self.study_hour * 10

    def test(self):
        print(self.name)
        print("hello")

shawn = Student("shawn", 1.0)
tina = Student("tina", 0.0, 100)
ben = Student("ben", 2.0,)
shawn.test()
shawn.study_something()
tina.study_something()
ben.study_something(12)
print(shawn.study_hour)
print(tina.study_hour)
print(ben.study_hour)
shawn.calGPA()
tina.calGPA()
ben.calGPA()
print(shawn.gpa)
print(tina.gpa)
print(ben.gpa)





# class Person:
#     a = 3
#     def __init__(self, _age, _name, _job, _money = 0):
#         self.money = _money
#         self.name = _name
#         self.age = _age
#         self.job = _job
    
#     def get(self, amount):  ## receive money from outside
#         self.money = self.money + amount
#         return self.money

#     def give(self, amount): ## give money to outside
#         self.money = self.money - amount
#         return amount
    
# shawnPerson = Person(10, "shawn", "programmer", 80)
# print(shawnPerson.age)
# print(shawnPerson.name)
# print(shawnPerson.money)

# def test(x, y = 2):
#     return x + y

# def test1(y, c, a = 4, d = 1):
#     return x + y

# c = test1(2)
# print(c)

# c = test(2, 3)
# print(c)

# c = test(2)
# print(c)




# TinaPerson = Person()
# TinaPerson.name = "Tina"
# TinaPerson.age = 9
# TinaPerson.job = "hihi"
# shawnPerson.workforayear()
# TinaPerson.workforayear()
# shawnPerson.money = shawnPerson.workforoneyear()
# TinaPerson.money = TinaPerson.workforoneyear()
# print(shawnPerson.money)
# print(TinaPerson.money)
# shawnPerson.money = shawnPerson.money -10
# TinaPerson.money = TinaPerson.money +10

# TinaPerson.get(shawnPerson.give(20))
# print("-------------")
# print(shawnPerson.money)
# print(TinaPerson.money)