# a = [1,1,2,3,"shawn", True]
# print(a[0])
# print(a[2])

# # print all student grade is F
# class studentInfo:
#     def __init__(self, _grade, _student_id):
#         self.grade = _grade
#         self.student_id = _student_id
    
#     def display(self):
#         print(self.student_id)

# student_class_dict = {}
# student_class_dict['jose'] = studentInfo('A+', 123123)
# student_class_dict['shawn'] = studentInfo('F', 454532)
# student_class_dict['aaa'] = studentInfo('B-', 234234)

# for key, value in student_class_dict.items():
#     if(value.grade == 'F'):
#         print(value.display())
#         print(key)

# print("====================")

# # for key, value in students.items():
# #     print(value)
# #     fail = False
# #     for info_key, info_value in value.items():
# #         if (info_value == 'F'):
# #             fail = True
# #             print(key)
# #         if(fail == True and info_key == 'StudentID'):
# #             print(info_value)
# #     fail = False
# students = {}
# students ['Jose'] = {'Grade': 'A+', 'StudentID': 22321}
# # students ['Jose'] = 12
# students ['Shawn'] = {'Grade': 'F', 'StudentID': 134234}
# students ['aaa'] = {'Grade': 'A+', 'StudentID': 22321}
# students ['bbb'] = {'Grade': 'F', 'StudentID': 23423}
# students ['ccc'] = {'Grade': 'A+', 'StudentID': 22321}
# students ['ddd'] = {'Grade': 'F', 'StudentID': 43434}
# students.update({'eee': {'Grade': 'F', 'StudentID': 43434}})


# print(students)
# # print(students['Shawn'])
# print(students.get('Shawn'))
# students.pop('ddd')
# print(students)
# students.clear()
# print(students)
# # print(students['Shawn'])
# print(students.get('Shawn'))

# for key, value in students.items():
#     print(value)
#     if(value['Grade'] == 'F'):
#         print(key)
#         print(value['StudentID'])

# # for key, value in students.items():
# #     print(value)
# #     fail = False
# #     for info_key, info_value in value.items():
# #         if (info_value == 'F'):
# #             fail = True
# #             print(key)
# #         if(fail == True and info_key == 'StudentID'):
# #             print(info_value)
# #     fail = False

# # for key, value in students.items():
# #     if(key == 'Shawn'):
# #         print(value)

# print("-------------------")

# print(students)
# print('Jose:')

# print(f' Grade: {students ["Jose"]["Grade"]}')

# print(f' ID: {students["Jose"]["StudentID"]}')
# # write a dict to have a collection of car name and price,
# # and print out the price of all the s
# car_dict = {}
# car_dict['bmw'] = 1000
# car_dict['ferrari'] = 2000
# car_dict['ford'] = 3000
# print(car_dict['bmw'])
# print(car_dict['ferrari'])
# print(car_dict['ford'])

# print("-------------------")
# # for key in car_dict:
# #     print(key)

# # for key, value in car_dict.items():
# #     print(key)
# #     print(value)

# for key in car_dict.keys():
#     print(key)

# # for value in car_dict.values():
# #     print(value)

# print("-------------------")
# class Test:
#     a = 1
# phone_price = {}
# phone_price['iphone'] = [1000, 200]
# phone_price['samsung'] = 800
# phone_price['oneplus'] = Test()

# print(phone_price)
# print(phone_price['samsung'])
# print(phone_price['iphone'])

# price_list = [1000, 800, 600]
# phone_list = ['iphone', 'samsung', 'oneplus']

# print(phone_list[0], price_list[0])

# for value in price_list:
#     print(value)

# def test():
#     return 2, 3, False, [2, 4]

# a, b, c, d = test()
# print(a)
# print(b)
# print(c)
# print(d)