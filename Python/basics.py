x = y = z = "Orange"
print(x)
print(y)
print(z)

x, y, z = "Orange", "Banana", "Cherry"
print(x)
print(y)
# print(z)


fruits = ["apple", "banana", "cherry"]
x, y, z = fruits

print(x)
print(y)
print(z)


x = "Python"
y = "is"
z = "awesome"
print(x, y, z)


def myfunc():
  global x
  x = "fantastic"

myfunc()

print("Python is " + x)


x = range(5,ord('M'))

#display x:
print(x)

#convert to list to display the content of x:
print(list(x))


#set
x = {"apple", "banana", "cherry"}

#display x:
print(x)

#display the data type of x:
print(type(x)) 


a = "Hello, World!"
print(len(a))

txt = "The best things in life are free!"
print("free" in txt)


b = "Hello, World!"
print(b[2:5])

b = "Hello, World!"
print(b[:5])

b = "Hello, World!"
print(b[2:])

b = "Hello, World!"
print(b[-5:-2])


a = "Hello, World!"
print(a.upper())



a = "  Hello, World!"
print(a.lower())

print(a.strip())

a = "Hello, World!"
print(a.replace("H", "J"))


a = "Hello, World!, reddy, kumar, kusum"
print(a.split(","))


age = 36
txt = f"My name is John, I am {age}"
print(txt)

price = 59
txt = f"The price is {price} dollars"
print(txt)

price = 59
txt = f"The price is {price:.2f} dollars"
print(txt)


print(f"The price is {20 * 59} dollars")

txt = "We are the so-called \"Vikings\" from the north."
print(txt) 


kusum=25
x=kusum if kusum>20 else 20
print(x)

