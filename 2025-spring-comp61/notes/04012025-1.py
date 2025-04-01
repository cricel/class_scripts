a = [1,1,2,3,"shawn", True]
print(a[0])
print(a[2])

# print all student grade is F
students = {}
students ['Jose'] = {'Grade': 'A+', 'StudentID': 22321}
students ['Shawn'] = {'Grade': 'F', 'StudentID': 00000}
students ['aaa'] = {'Grade': 'A+', 'StudentID': 22321}
students ['bbb'] = {'Grade': 'F', 'StudentID': 00000}
students ['ccc'] = {'Grade': 'A+', 'StudentID': 22321}
students ['ddd'] = {'Grade': 'F', 'StudentID': 00000}

for key, value in students.items():
    if(key == 'Shawn'):
        print(value)

print("-------------------")

print(students)
print('Jose:')

print(f' Grade: {students ["Jose"]["Grade"]}')

print(f' ID: {students["Jose"]["StudentID"]}')
# write a dict to have a collection of car name and price,
# and print out the price of all the s
car_dict = {}
car_dict['bmw'] = 1000
car_dict['ferrari'] = 2000
car_dict['ford'] = 3000
print(car_dict['bmw'])
print(car_dict['ferrari'])
print(car_dict['ford'])

print("-------------------")
# for key in car_dict:
#     print(key)

# for key, value in car_dict.items():
#     print(key)
#     print(value)

for key in car_dict.keys():
    print(key)

# for value in car_dict.values():
#     print(value)

print("-------------------")
class Test:
    a = 1
phone_price = {}
phone_price['iphone'] = [1000, 200]
phone_price['samsung'] = 800
phone_price['oneplus'] = Test()

print(phone_price)
print(phone_price['samsung'])
print(phone_price['iphone'])

price_list = [1000, 800, 600]
phone_list = ['iphone', 'samsung', 'oneplus']

print(phone_list[0], price_list[0])

for value in price_list:
    print(value)

