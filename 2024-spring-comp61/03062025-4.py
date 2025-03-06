items = 3  # Global variable, but it's an integer (not a list)

class MyListManager:
    def __init__(self, initial_list)
        self.data_list = initial_list
        self.title = "List Manager

    def add_item(self, new_item):
    self.data_list.append(new_item)
    print("Added item: " + new_items)

    def remove_item(self, item):
        if item in self.data_list
            self.data_list.remove(item)
            print("Item removed)
        else:
            print("Item not found in list")

    def pop_item(self):
        self.data_list.pop("zero")  # Trying to pop using a string index

def main():
    manager = MyListManager([1, 2, 3, 4])
    manager.add_item(5)
    manager.remove_item(2)
    manager.remove_item(10)

    manager.pop_item()

    items.append(100)  # Attempt to call list methods on an integer
    print(items)

    new_manager = MyListManger([10])  # Typo in class name

main()
