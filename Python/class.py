# class Myclas:
#     name="kusum"
#     def __init__(self, name,roll_no):
#         self.name = name
#         self.roll_no = roll_no
#     def myfunc(self):
#         print("Hello my name is " + self.name ,"and my roll number is " + str(self.roll_no))
# p1=Myclas("kusum", 101)
# print(p1.name)
# print(p1.roll_no)
# p1.myfunc()



class Student:
    name="kusum"
    def __init__(self):
        print("studenet database is created")
    def __init__(self,name):
        self.fullname = name
        # self.age = age
        print("studenet database is created")
        print("my name is " + self.fullname)
        print(self)

    # def myfunc(self):
    #     print("Hello my name is " + self.name + " and I am " + str(self.age) + " years old.")   


s1=Student()
# s1.myfunc()