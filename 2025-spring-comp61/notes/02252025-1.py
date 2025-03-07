# a = 1

# def test():
#     a = a+1
#     a= 10 -3
#     return 10


# class TestClass:
#     a = 3
#     def test():
#         return 2
    

# print(a)
# print(test())

# testclass = TestClass()
# print(testclass.a)
# print(testclass.test())


# a = 3
# c = a + 5

# a1 = 4
# c = a1 + 5

# a2 = 6
# c = a2 + 5

# def cal(x):
#     return x + 5

# a = 3
# c = cal(a)
# a1 = 4
# c = cal(a1)
# # print(c)
# a2 = 6
# c = cal(a2)
# print("----------")
# a = 4
# cal():
#     xxxx
# class abc:
#     a = 2
#     b = 4
#     c = [1,2,3]

#     def call(self, x):
#         return self.b + 5 + x
    
# abcClass = abc()
# print(abcClass.a)
# abcClass.a = 10
# print(abcClass.a)
# print(abcClass.call(10))
# aaclass = abc()
# print (aaclass.a)
# print(aaclass.call())



# create a variable call "money" in person class,
# make default money = 0
# both shawn and tina will work for 12 month
# creat a function to calculate entire year salary
# outside of the class defination (in main logic):
#   then shawn give tine 10 dollar, print out how much money shawn and tina have after that
# xiangxulin.com
class Person:
    money = 0
    name = "testUser"
    age = -1
    job = "none"

    def salary(self):
        return self.age * 10
    
    def workforayear(self):
        self.money = self.salary() * 12
    
    def workforoneyear(self):
        return self.salary() * 12
    
    def give(self, amount): ## give money to outside
        self.money = self.money - amount
        return amount
    
    def get(self, amount):  ## receive money from outside
        self.money = self.money + amount
        return self.money
    
shawnPerson = Person()
shawnPerson.name = "shawn"
shawnPerson.age = 10
shawnPerson.job = "programmer"
TinaPerson = Person()
TinaPerson.name = "Tina"
TinaPerson.age = 9
TinaPerson.job = "hihi"
shawnPerson.workforayear()
TinaPerson.workforayear()
shawnPerson.money = shawnPerson.workforoneyear()
TinaPerson.money = TinaPerson.workforoneyear()
print(shawnPerson.money)
print(TinaPerson.money)
shawnPerson.money = shawnPerson.money -10
TinaPerson.money = TinaPerson.money +10

TinaPerson.get(shawnPerson.give(20))
print("-------------")
print(shawnPerson.money)
print(TinaPerson.money)


# print(TinaPerson.salary())

# BenPerson = Person()
# BenPerson.age = 8
# print(TinaPerson.salary())

#create a class call person, with a variable name call "name", "age", "job"
#inside class, create another function called "salary"
#in salary function, the salary is equal to age * 10
# create 3 instance of this person class, with different name and age and job, and print out its salary




# def test(x):
#     a = 3
#     a  = a +x
#     return a
# def test1():
#     a = 3
#     a  = a +5
#     return a
# a = test1()
# b=test1()
# # a = test(4)
# # b = test(10)


# a = []
# a.append(xxx)
# [4, 6]
# [2, 4]