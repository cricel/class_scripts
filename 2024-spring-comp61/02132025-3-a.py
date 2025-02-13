def input_func():
    global number
    user_input = input("Enter a number (or 'exit' to quit): ")

    if user_input.lower() == "exit":
        print("Exiting the loop.")

    number = int(user_input)  # Convert input to integer

def function_1():
    if number % 2 == 0:
        print("Positive even number")
    else:
        print("Positive odd number")

def function_2(num, num1):
    if num % 2 == 0:
        print("Negative even number")
    else:
        print("Negative odd number")

def function_3():
    print("Number is zero")

number = -1
while True:
    input_func()

    if number > 0:
        function_1()
    elif number < 0:
        function_2(7657656, 343434)
    else:
        function_3()

#xiangxulin.com