class Person:
    def __init__(self, name, age):
        self.name = name
        self.age = age
        self.child = None  # Only one child

    def add_child(self, child):
        self.child = child

    def print_family_line(self):
        print(f"{self.name} ({self.age})")
        if self.child:
            self.child.print_family_line()

    def count_large_age_gaps(self, gap_limit):
        count = 0
        if self.child:
            age_gap = self.age - self.child.age
            if age_gap > gap_limit:
                count = 1
            count += self.child.count_large_age_gaps(gap_limit)
        return count


def build_family_line():
    name = input("Enter person's name: ")
    age = int(input(f"Enter {name}'s age: "))
    person = Person(name, age)

    has_child = input(f"Does {name} have a child? (yes/no): ").lower()
    if has_child == 'yes':
        child = build_family_line()
        person.add_child(child)

    return person


# Main Program
print("Welcome to the Generational Gap Checker!\n")
root = build_family_line()

print("\nHere is your family line:\n")
root.print_family_line()

gap_limit = int(input("\nEnter the minimum age gap to check between generations: "))
gap_count = root.count_large_age_gaps(gap_limit)
print(f"\nNumber of generations with an age gap greater than {gap_limit}: {gap_count}")