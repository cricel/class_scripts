
def printmenu():
    print("1. Check Balance")
    print("2. Deposit Money")
    print("3. Withdraw Money")
    print("4. Exit")

printmenu()
balance = 1000.0
choices = int(input("choose a menu option: "))

while(choices != 4):
    if(choices == 1):
        print("my current balance is: ", balance)
    elif(choices == 2):
        deposit = input("input a deposit amount")
        balance = balance + deposit
    elif(choices == 3):
        withdraw = input("input a withdraw amount")
        if(withdraw > balance):
            print("Insufficient funds.")
        else:
            balance = balance - withdraw
    
    printmenu()

    choices = int(input("choose a menu option:"))

print("program end")




num = int(input("enter a number: "))
if(num == 1):
    print("hello")
elif(num == 2):
    print("bye")
elif(num == 3):
    print("byebye")
else:
    print("haha")
num = num + 2
if(num == 1):
    print("hello")
elif(num == 2):
    print("bye")
elif(num == 3):
    print("byebye")
else:
    print("haha")
num = num -2
print(num)