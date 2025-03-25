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

two_d_list = []
line = []
for i in range(3):
    for j in range(3):
        line.append(str(i) + str(j) + " ")
    two_d_list.append(line)
    line = []

print(two_d_list)

print_line = ""
for i in range(3):
    for j in range(3):
        print_line += two_d_list[i][j]
    
    print(print_line)
    print_line = ""