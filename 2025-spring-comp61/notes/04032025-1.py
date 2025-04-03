total = 0

def sum_region(grid, row):
    global total
    print(grid[row])
    for j in grid[row]:
        print(j)
        total += j
    if(row < 2):
        sum_region(grid, row + 1)
   
# Example usage
grid = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]
grid_dict={}
grid_dict.update({'0': {'0': 1, '1': 2, '2': 3}})
grid_dict.update({'1': {'0': 4, '1': 5, '2': 6}})
grid_dict.update({'2': {'0': 7, '1': 8, '2': 9}})
# step 1, create a dict where each row is
# its value
# step 2, make each col is also a key value
# pair dict
# step 3, add them up to 45
sum_region(grid, 0)  # Output: 45

print(total)