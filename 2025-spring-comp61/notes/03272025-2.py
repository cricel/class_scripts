class Person:
    pass
e_list = ['a', True, 1, Person()]
a_list = [1, 2, 3, 1, 2, 3, 1, 2, 3]
b_list = [4, 5, 6]
c_list = [a_list, b_list]  # 2d list
f_list = [c_list, c_list]  # 3d list
print(c_list[0]) # 1d list -> list
print(c_list[0][1]) # get number 2 from a_list
if(len(c_list[1]) > 4):
    print(c_list[1][4])
else:
    print("index 4 not exit")


d_list = [[1, 2, 3],
          [4, 5, 6]]
print(c_list[0][0])