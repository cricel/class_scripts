# line = ""
# for i in range(3):
#     for j in range(3):
#         line += str(i) + str(j) + " "
#     print(line)
#     line = ""

# a_list = [0, 1, 2, 3, 4]
# print(a_list)
# a_list[2] = 10
# print(a_list[2])


# a_list = [0, 1, 2, 3, 4]
# two_d_list = [[0, 1, 2, 3, 4],
#               [5, 6, 7, 8, 9],
#               [10, 11, 12, 13, 14],
#             ]

# print("two_d_list: ", two_d_list)
# print("a_list: ", a_list)
# print("a_list[1]: ", a_list[1])
# print("two_d_list[1]: ", two_d_list[1])
# print("two_d_list[1][3]: ", two_d_list[1][3])

# line = ""
# for i in range(3):
#     for j in range(3):
#         line += str(i) + str(j) + " "
#     print(line)
#     line = ""

# two_d_list = []
# line = []
# for i in range(3):
#     for j in range(3):
#         line.append(str(i) + str(j) + " ")
#     two_d_list.append(line)
#     line = []

# print(two_d_list)

# print_line = ""
# for i in range(3):
#     for j in range(3):
#         print_line += two_d_list[i][j]
    
#     print(print_line)
#     print_line = ""

import random 
num = random.randint(0, 1)

# two_d_list = []
# line = []
# for i in range(3):
#     for j in range(3):
#         # line.append(str(i) + str(j) + " ")
#         if(i == j):
#             line.append("*")
#         else:
#             line.append(" ")
#     two_d_list.append(line)
#     line = []

# print(two_d_list)

# print_line = ""
# for i in range(3):
#     for j in range(3):
#         print_line += two_d_list[i][j]
    
#     print(print_line)
#     print_line = ""



# 1. init each cell of 2d list to random number bettwen 0 and 1
# 2. ask user input, which cell they want to open
# 3. when user enter the cell, write a if statement to check
# if there has a mine or not (if == to 1 or not)
# 4. continue untill user die or all mine found
# import random 
# # num = random.randint(0, 1)

# two_d_list = []
# line = []
# for i in range(3):
#     for j in range(3):
#         # line.append(str(i) + str(j) + " ")
#         line.append(random.randint(0, 1))
#     two_d_list.append(line)
#     line = []

# print(two_d_list)

# input_x = int(input("input x position: "))
# input_y = int(input("input y position: "))

# if(two_d_list[input_x][input_y] == 1):
#     print("you lose")
# else:
#     print("keep going")


# print_line = ""
# for i in range(3):
#     for j in range(3):
#         print_line += two_d_list[i][j]
    
#     print(print_line)
#     print_line = ""




import random 
# num = random.randint(0, 1)

visual_two_d_list = []
visual_line = []
for i in range(3):
    for j in range(3):
        # line.append(str(i) + str(j) + " ")
        visual_line.append("#")
    visual_two_d_list.append(visual_line)
    visual_line = []

print(visual_two_d_list)

mine_two_d_list = []
mine_line = []
for i in range(3):
    for j in range(3):
        # line.append(str(i) + str(j) + " ")
        mine_line.append(random.randint(0, 1))
    mine_two_d_list.append(mine_line)
    mine_line = []

print(mine_two_d_list)

input_x = int(input("input x position: "))
input_y = int(input("input y position: "))

if(mine_two_d_list[input_x][input_y] == 1):
    visual_two_d_list[input_x][input_y] = "X"
    print("you lose")
else:
    visual_two_d_list[input_x][input_y] = "_"
    print("keep going")

print(visual_two_d_list)

# print_line = ""
# for i in range(3):
#     for j in range(3):
#         print_line += two_d_list[i][j]
    
#     print(print_line)
#     print_line = ""