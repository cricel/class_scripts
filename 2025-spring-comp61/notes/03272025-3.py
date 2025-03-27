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
        self.salary_list = []
    
    def work(self, _day):
        salary = self.daily_salary * _day
        self.money = self.money + salary

    def work_a_month(self):
        salary = self.daily_salary * 30


person_list = []
shawn = Person("shawn", "lin", 10)
person_list.append(shawn)
ben = Person("ben", "ben", 20)
person_list.append(ben)
xxx = Person("xxx", "x", 11)
person_list.append(xxx)
yyy = Person("yyy", "y", 25)
person_list.append(yyy)

# person_list = [shawn, ben, xxx, yyy]
rich_person = None
most_daily_salary = 0
for person in person_list:
    if(person.daily_salary > most_daily_salary):
        rich_person = person
        most_daily_salary = rich_person.daily_salary

for i in range(len(person_list)):
    if(person_list[i].daily_salary > most_daily_salary):
        rich_person = person_list[i]
        most_daily_salary = rich_person.daily_salary
    
print(rich_person.first_name, rich_person.last_name)



# create 2 more random person
# then create a list with all these 4 person
# write a for loop to go through the list
#    check who make most dayliy salary
# xiangxulin.com/
# shawn.work(30)
# ben.work(15)

# if(shawn.money > ben.money):
#     print("Shawn has more money")
# else:
#     print("Ben has more money")

