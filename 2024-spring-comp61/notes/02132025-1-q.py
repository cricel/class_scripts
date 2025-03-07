def print_func():
    print(base)

# def minus_func():
#     result = -1
#     result = base - 5
        # global base
#     print(result)

def minus_func(base):
    # base = <<<<<
    # local variable base
    result = -1
    result = base - 5
    print(result)

def add_func(base):
    result = -1
    base = base + 2
    result = 3 + base
    print(result)

# def input_func():
#     print("1. add")
#     print("2. minus")
#     print("3. print")
#     print("4. quit")
#     input_func_raw = int(input("enter a value: "))
#     return input_func_raw

def input_func():
    global input_raw
    print("1. add")
    print("2. minus")
    print("3. print")
    print("4. quit")
    input_raw = int(input("enter a value: "))

base = 4

input_raw = -1
input_raw()
while (input_raw != 4):
    if(input_raw == 1):
        add_func(base)
    elif(input_raw == 2):
        minus_func(6572657623)
    elif(input_raw == 3):
        print_func()
    
    input_raw()
