# def checking():
#     if(num == 1):
#         print("hello")
#     elif(num == 2):
#         print("bye")
#     elif(num == 3):
#         print("byebye")
#     else:
#         print("haha")
#     test_num = num * 2 /2 + 2 - 1
#     return test_num

# num = int(input("enter a number: "))
# test_num_2 = checking()
# print(test_num_2)
# num = num + 2
# checking()
# num = num -2
# print("num")
# print(num)


# num1 = 3
# num2 = 4
# sum = num1 + num2
# print(sum)

# def cal(num_func):
#     num = 4
#     num1 = 5
#     # output = num + num1
#     output = num_func + 1
#     num_func = num_func + 2
#     print("output", output)
#     print("num_func", num_func)
#     return output

# output = -1
# num = 3
# num1 = 2
# num3 = cal(34)
# print(num3)
# num3 = cal(num)
# print(num3)
# print(num)

# num2 = cal()
# print("num", num)
# print(num2)

# ougfhfjfhfjhjgt = cal()
# print(output)






# num3 = cal() + num1
# output = cal()

# print(output)



# def print_function():
#     global input_raw
#     print("1. xxzzzzzzxx ")
#     print("2. xxyyyyyyxx")
#     print("3. xxxx")
#     print(input_raw)
#     # num = num + 2
#     # print (num)
#     # num1 = 3 + num
#     input_raw = int(input("enter a number to choose from a menu: "))

# input_raw = -1
# # num = 3
# print_function()
# # print(num1)

# while(input_raw != 4):
#     print_function()

#     # input_raw = int(input("enter a number to choose from a menu: "))





# def messy_print():
#     print("1. xxzzzzzzxx ")
#     print("2. sfsdfsdsf")
#     print("3. xxxx")
#     print(input_raw)
#     input_raw = int(input("enter a number to choose from a menu: "))

# messy_print()
# messy_print()
# messy_print()
# messy_print()
# messy_print()


# while(input_raw != 4):
#     messy_print()
#     messy_print()
#     messy_print()
#     messy_print()

#     # input_raw = int(input("enter a number to choose from a menu: "))




def num_cal():
    global num1
    num1 = 7
    num = num1 + 2
    return num
def another_num_cal(num_func):
    num = num_func + 1
    num = num1 + 2
    return num
def final_num_cal():
    global num2
    num2 = 8
    result = num2 + num3
    return result
num1 = 3
num2 = num_cal()
print(num2)
print("1. num1: ", num1)
num3 = another_num_cal(num1)
print(num3)
print("2. num3: ", num3)
num_cal = final_num_cal()
# create a function to calcuate the num2 + num3
# and have a variable in the outside call num_cal equal to the result
# and set the num2 value to 8 within the function
