
# num1 = 0
# num2 = 0

# while num1 <= 3:
#     num2 = 0
#     text = ""
#     while(num2 <= 3):
#         if (num1 == num2):
#             text = text + "a"
#         else:
#             text = text + " "
#         num2 = num2 + 1
#     print(text)
#     num1 = num1 + 1


# num1 = 0
# num2 = 0

# while num1 <= 3:
#     num2 = 0
#     text = ""
#     while(num2 <= 3):
#         if (num1 + num2 == 3):
#             text = text + "a"
#         else:
#             text = text + " "
#         num2 = num2 + 1
#     print(text)
#     num1 = num1 + 1



# a = 1
# b = 1.0
# c = "a     bc"
# print (type(a))
# print (type(b))
# print (type(c))
# d = [12121, "asdas", 2.2323, "ddas"]
# print (type(d))
# e = [a, b, c]
# print (type(e))
# print (e)
# print(e[0])
# print(e[2])
# my_nums = [5, 10, 20]
# print(my_nums)

# prices = [2, 5, 10, 20]
# prices[2] = 100
# print(prices)
# prices.append("asbc")
# prices.append(20)
# print(prices)
# prices.pop(2)
# print(prices)
# prices.remove(20)
# print(prices)


# my_list = [2, 3, 4, 76, 32, 3, 2]
# my_list[1] = "abc"
# my_list.remove(3)
# # my_list.remove(3)
# my_list[3] = "abc"
# my_list.pop(2)
# my_list.append(2)
# my_list.remove(2)
# print(my_list)
# print(len(my_list))
# my_list.insert(2, "cba")
# print(my_list)
# print(len(my_list))
# my_list.insert(3, 9)
# print(my_list)
# print(len(my_list))


# my_list = [2, 3, 4, 76, 32, 3, 2]
# my_list[1] = "abc"
# # my_list.remove(3)
# # my_list.remove(3)
# index = 0
# while(index < len(my_list)):
#     if(my_list[index] == 3):
#         my_list.remove(3)
#     index = index +1

# my_list[3] = "abc"
# my_list.pop(2)
# my_list.append(2)
# my_list.remove(2)
# print(my_list)

my_list = [2, 3, 4, 76, 32, 3, 2]
print(my_list)
my_list.insert(1, 5)
print(my_list)
my_list.insert(4, 3)
print(my_list)
my_list.remove(2)
print(my_list)

index = 0
counter = 0
while(index < len(my_list)):
    if(my_list[index] == 3):
        counter = counter + 1
    if(counter == 2):
        my_list.pop(index)
        counter = counter + 1
    index = index + 1
print(my_list)

my_list.append(4)

index = 0
while(index < len(my_list)):
    if(my_list[index] == 4):
        my_list.remove(4)
    index = index + 1
print(my_list)