global_val = 20

class Calculator:
    def __init__(self, a, b):
        self.a = a
        self.b = b

    def add(self):
        return self.a - self.b

    def multiply(self):
        return self.a * self.b

def check_global():
    if global_val >= 20:
        print("Global is sufficient!")
    else:
        print("Global is insufficient!")

def main():
    calc = Calculator(10, 5)
    print("Addition:", calc.add())
    print("Multiplication:", calc.multiply())
    check_global()

main()

# Addition: 15
# Multiplication: 50
# Global is sufficient!
