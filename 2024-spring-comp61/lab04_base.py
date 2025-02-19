def add_student(names, grades):
    """
    Hint:
    - Use input() to get the student’s name and grade.
    - Append the name to the 'names' list and the grade to the 'grades' list.
    - Make sure the indexes of both lists match (i.e., names[i] corresponds to grades[i]).
    """

def view_students(names, grades):
    """
    Hint:
    - Check if the 'names' list is empty. If it is, inform the user that no records exist.
    - Use a for loop or a while loop to display all student names with their corresponding grades.
    - Use the range() function to loop through the indices of the lists.
    """

def update_student_grade(names, grades):
    """
    Hint:
    - Prompt the user to enter the name of the student whose grade needs to be updated.
    - Check if the entered name exists in the 'names' list using the 'in' operator.
    - If the student exists, find the index using names.index() and update the corresponding grade in the 'grades' list.
    - If the student doesn’t exist, display an appropriate message.
    """

def remove_student(names, grades):
    """
    Hint:
    - Ask the user for the student name to remove.
    - Check if the name is in the 'names' list.
    - If found, use the index to remove the student from both 'names' and 'grades' using pop().
    - If the name is not found, print an error message.
    """

def exit_program():
    """
    Hint:
    - This function should simply print a goodbye message.
    - The actual exit logic (breaking the while loop) is handled in the main function.
    """

#vvvvvvvvvvvv main global logic vvvvvvvvvvvv#
"""
Hint:
- Create two empty lists: 'names' to store student names and 'grades' to store their grades.
- Use a 'while True:' loop to display the menu continuously until the user decides to exit.
- Inside the loop:
    1. Print the menu options.
    2. Use input() to get the user's choice.
    3. Use if-elif-else statements to:
        - Call add_student() if the user selects option 1.
        - Call view_students() if the user selects option 2.
        - Call update_student_grade() if the user selects option 3.
        - Call remove_student() if the user selects option 4.
        - Call exit_program() and break the loop if the user selects option 5.
    4. Print an error message for invalid choices.
"""
