n=int(input("enter a number: "))
print(n)
# happy number or not

n = int(input("enter a number: "))
happy = happy_number(n)
def happy_number(num):
    seen = set()
    while num != 1 and num not in seen:
        seen.add(num)
        num = sum(int(digit) ** 2 for digit in str(num))
    return num == 1 
print(happy)


#area of circles overlapping    

a1 = float(input("Enter the radius of the first circle: "))
a2 = float(input("Enter the radius of the second circle: "))
a3 = float(input("Enter the distance between the centers of the circles: "))