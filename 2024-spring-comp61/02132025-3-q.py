while True:
    user_input = input("Enter a number (or 'exit' to quit): ")

    if user_input.lower() == "exit":
        print("Exiting the loop.")

    number = int(user_input)  # Convert input to integer

    if number > 0:
        if number % 2 == 0:
            print("Positive even number")
        else:
            print("Positive odd number")
    elif number < 0:
        if number % 2 == 0:
            print("Negative even number")
        else:
            print("Negative odd number")
    else:
        print("Number is zero")

