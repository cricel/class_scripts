# total = 0

# def sum_region(grid, row):
#     global total
#     print(grid[row])
#     for j in grid[row]:
#         print(j)
#         total += j
#     if(row < 2):
#         sum_region(grid, row + 1)
   
# def sum_region_dict(grid, row):
#     global total
#     print(grid)
#     for key, value in grid.items():
#         print(key)
#         print(value)
#         for key_inner, value_inner in value.items():
#             print(key_inner)
#             print(value_inner)
#             total += value_inner

# def modify_dict(grid_dict):
#     for key, value in grid_dict.items():
#         # print(key)
#         # print(value)
#         for key_inner, value_inner in value.items():
#             # print(key_inner)
#             # print(value_inner)
#             grid_dict[key][key_inner] = int(input("Enter a Number at " +key + " " + key_inner + ": " ))

#     print(grid_dict)

# # create a new function, which take user input
# # and give a new value to this dict
# # {
# #     {xx,xx,xx},
# #     {xx,xx,xx},
# #     {xx,xx,xx},
# # }
# # Example usage
# grid = [
#     [1, 2, 3],
#     [4, 5, 6],
#     [7, 8, 9]
# ]
# grid_dict={}
# grid_dict.update({'0': {'0': 1, '1': 2, '2': 3}})
# grid_dict.update({'1': {'0': 4, '1': 5, '2': 6}})
# grid_dict.update({'2': {'0': 7, '1': 8, '2': 9}})

# # print(grid_dict['1']['1'])
# # # grid_dict['1']['1'] = 10
# # grid_dict['1']['1'] = input("Enter a number: ")
# # print(grid_dict['1']['1'])
# # step 1, create a dict where each row is
# # its value
# # step 2, make each col is also a key value
# # pair dict
# # step 3, add them up to 45
# # sum_region(grid, 0)  # Output: 45
# # sum_region_dict(grid_dict, 0)  # Output: 45
# modify_dict(grid_dict)

# print(total)

class FancyDict:
    def __init__(self):
        self.grid_dict = {}
        self.total = 0
    
    def getUserInput(self):
        for i in range(3):
            print(i)
            # self.grid_dict[i] = int(input("Enter a Number at " + str(i) + ": "))
            self.grid_dict[i] = {}
            for j in range(3):
                self.grid_dict[i][j] = int(input("Enter a Number at " + str(i) + " " + str(j) + ": "))
        
        print(self.grid_dict)
        # after geting user input, it should looks like this
        # grid_dict.update({'0': {'0': 1, '1': 2, '2': 3}})
        # grid_dict.update({'1': {'0': 4, '1': 5, '2': 6}})
        # grid_dict.update({'2': {'0': 7, '1': 8, '2': 9}}
    
    def display_sum(self):
        for key, value in self.grid_dict.items():
            for key_inner, value_inner in value.items():
                self.total += value_inner

fanyDict = FancyDict()
fanyDict.getUserInput()
fanyDict.display_sum()