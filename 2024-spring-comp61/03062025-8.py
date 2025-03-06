global_tax_rate = 0.1

class SalaryCalculator:
    def __init__(self, base_salary, bonus):
        self.base_salary = base_salary
        self.bonus = bonus

    def compute_net_salary(self):
        # Intended logic: net salary = base_salary + bonus - (base_salary * global_tax_rate)
        # Logic error: tax is computed on (base_salary + bonus) instead of just base_salary.
        tax = (self.base_salary + self.bonus) * global_tax_rate
        return self.base_salary + self.bonus - tax

def main():
    salary = SalaryCalculator(5000, 1000)
    net_salary = salary.compute_net_salary()
    print("Net Salary:", net_salary)

    if net_salary > 5500:
        print("High salary!")
    else:
        print("Low salary!")

main()

# Expected Output (if the logic were implemented correctly):
# Net Salary: 5500.0
# Low salary!
