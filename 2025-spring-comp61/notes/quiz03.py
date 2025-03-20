# write a program with a menu system to add and remove things (string) from list
# you will create a empty list to hold items
# with option 1, add item to the end of list
# with option 2, remove item from end of list
# after select 1 or 2, ask user what do they want to put into the list
# 1. add item
# 2. remove item
# >> 1
# what do you want to enter
# >> apple
# now you have [apple]
# 1. add item
# 2. remove item
# >> 2
# now you have []


class MenuProgram:
    def __init__(self):
        self.item_list = []
        self.menu_option = 0
    def show_menu(self): ## show the menu and ask user for input
        print("1. add item")
        print("2. remove item")
        self.menu_option = int(input("enter a option: "))
    def display_output(self): ## print output
        print(self.item_list)
    def run(self): 
        while(self.menu_option != 3):
            self.show_menu()
            if (self.menu_option == 1):
                item_name = input("enter a item: ")
                self.item_list.append(item_name)
                self.display_output()
            if (self.menu_option == 2):
                self.item_list.remove(self.item_list[-1])
                self.display_output()

menu_program = MenuProgram()
menu_program.run()

# item_list = []
# menu_option = 0
# ## -----------------------
# while(menu_option != 3):
#     print("1. add item")
#     print("2. remove item")
#     menu_option = int(input("enter a option: "))
#     if (menu_option == 1):
#         item_name = input("enter a item: ")
#         item_list.append(item_name)
#         print(item_list)
#     if (menu_option == 2):
#         item_list.remove(item_list[-1])
#         print(item_list)