user_age = "25"  # Global variable (note it's a string, not an int)

class AgeChecker:
    def __init__(self, name, age)
        self.name = name
        self.age = age
        self.valid = False

    def validate_age(self):
    # Indentation error here
        if self.age > 18
            self.valid = True
            print(f"{self.name} is an adult!")
        else:
            print(f"{self.name} is not an adult yet.")

def convert_user_age():
    # This will cause a TypeError because 'user_age' is a string
    return user_age + 5

def check_name():
    if user_name == "Alice":
        print("Hello, Alice!")
    else
        print("You are not Alice.")

obj = AgeChecker("Bob", user_age)
obj.validate_age()
print(convert_user_age())
check_name()
