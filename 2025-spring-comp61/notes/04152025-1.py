# x = -1
# while(True):
#     try:
#         x = 3
#         y = 3 + 1
#         x = int(input("Please enter a number betwwen 1 - 2: "))
#     except:
#         x = 1
#         print("Somthing went wrong")
#     finally:
#         x = 2

#     if(x == 1):
#         print("Hello")
#     elif(x == 2):
#         print("bye")

# print("Finsh")

# # def divide(x, y):
# #     try:
# #         result = x / y
# #     except ZeroDivisionError:
# #         print("division by zero!")
# #     else:
# #         print("result is", result)
# #     finally:
# #         print("executing finally clause")

# # divide(2, 1)

# # divide(2, 0)

# # divide("2", "1")

# # create a variable a and b and both take input from user
# # a should be a int
# # b should be string
# # if a == 1 : print hello
# # if a == 2 : print bye
# # if b == "lol" : print hellohello
# # if b == "haha" : print byebye
# # if a + b == 3: print hihihi
# # print finish at the end
# # this should be keep loop forever
# a = -1
# b = ""
# c = ''
# while(True):
#     try:
#         a = int(input("Please enter a int number: "))
#     except:
#         print("Looks like you enter the string instead of int")
#     else:
#         print("you entered", a)
#     finally:
#         print("I am gonna run anyway")

#     b = input("Enter a string: ")

#     if (a == 1):
#         print("hello")

#     if (b == "lol"):
#         print("haha")

#     try:
#         if(a + b == 3):
#             print("hihihi")
#     except:
#         print("Looks the type may mismatch or some other error")


# a = -1
# b = "abc"
# c = 0
# try:
#     a = int(input("Please enter a int number: "))
#     c = a + b
# except TypeError as e:
#     print("TypeError--------------")
#     print(e)
#     c = 3
# except Exception as e:
#     print("Exception--------------")
#     print(e)
#     print("Looks like you enter the string instead of int")
# # finally:
# print("this gonna run anyway")

# if(c == 3):
#     print("hello")
# print("a: ", a)
# def test_input():
#     global b
#     try:
#         _a = int(input("Please enter a int number: "))
#         return _a
#     except Exception as e:
#         print(e)
#     finally:
#         b = 3
#         print("hello")



# def test_input():
#     global b
#     _a = int(input("Please enter a int number: "))
#     return _a
#     b = 3
#     print("hello")
b = 2

def test_input():
    global b
    try:
        _a = int(input("Please enter a int number: "))
        return _a
    except Exception as e:
        print(e)
    else:
        _a = 2
    finally:
        b = 3
        print("hello")
        # _a = 3
        return _a

a = 3
a = test_input()
print (a+b)