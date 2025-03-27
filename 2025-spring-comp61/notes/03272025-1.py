# Write a Person class that have 4 attributes
# Money, first name, last name, daily salary
# And a work() function, with 1 argument as how many day he have work
# Inside the work function, you will calculate the salary as 
# (salary = day x daily salary, money = salary + money)


# Create 2 person in the main code, 
# With initial value of 
# Shawn lin,$10/day, 
# Ben ben $20/day

# then shawn work for 30 day and ben work for 15 day,
# Print out who have more money

class Person:
    def __init__(self, _first_name, _last_name, _daily_salary):
        self.money = 0
        self.first_name = _first_name
        self.last_name = _last_name
        self.daily_salary = _daily_salary
    
    def work(self, _day):
        salary = self.daily_salary * _day
        self.money = self.money + salary


shawn = Person("shawn", "lin", 10)
ben = Person("ben", "ben", 20)

shawn.work(30)
ben.work(15)

if(shawn.money > ben.money):
    print("Shawn has more money")
else:
    print("Ben has more money")

