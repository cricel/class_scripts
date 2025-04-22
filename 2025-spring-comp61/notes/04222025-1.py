a = 1
b = 2
c = a + b

def test(_a, _b):
    c = _a + _b
    return c

def test1(_a, _b):
    global c
    c = _a + _b

def test2(_a, _b):
    _a += 3
    _b -= 2
    c = _a + _b
    return _a, _b, c

def test3(_a = 4, _b = 2):
    c = _a + _b
    return c

def test4(_a, _b = 2):
    c = _a + _b
    return c

# def test5(_a, _b = 2, _c):
def test5(_a, _c, _b = 2):
    c = _a + _b
    return c

c = test(1,2)
test1(1,2)
a,b,c = test2(1,2)
c = test3()
c = test3(1,2)
c = test4(1)
c = test5(1, 2, 3)
c = test5(1, 3)


class TestClass:
    def __init__(self, _a = 4, _b = 2):
        self.a = _a
        self.b = _b
        self.c = 0
    
    def test(self):
        self.c = self.a + self.b 
        print("c value:", self.c)

testClass = TestClass()
testClass.test()

testClass = TestClass(3, 4)
testClass.test()

testClass1 = TestClass(2, 1)
# testClass1.b = 4
testClass1.test()

testClass2 = TestClass(4 ,1)
# testClass2.a = 3
# testClass2.b = 2
testClass2.test()

l = [1, 2, 3]
print(l)
print(l[0])
print(l[2])
print(len(l))
# print(l[9])
l1 = [1, False, "hello", TestClass()]

testClass3 = TestClass(l[0] ,l[1])
testClass2.test()

l = [1, 2, 3]
l2 = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
]

l3 = [1, 2, 3]
l4 = [4, 5, 6]
l5 = [7, 8, 9]
l6 = [l3, l4, l5]

print(l2[1])
print(l2[1][2])
print(l6[1])
print(l6[1][2])

l4 = [4, 5, 6] # key for list is index
# key for dict is whatever the key you defined
d = {"0": 4, "1": 5, "2": 6}
print(d["0"])
d = {"first": 4, "second": 5, "third": 6}
print(d["first"])

# create a class call "student" with attribute "name", "age"
# define a function call "drinking", which gonna check if student is under 21 or not
# init 3 student in a list
# and run through the list and check how many student can drink beer 
