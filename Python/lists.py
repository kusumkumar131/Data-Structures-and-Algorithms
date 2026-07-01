thislist = ["apple", "banana", "cherry"]
print(thislist[1])


thislist = ["apple", "banana", "cherry"]
print(thislist[-1])


thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[2:5])


thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[:4])


thislist = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]
print(thislist[-4:-1])

thislist = ["apple", "banana", "cherry"]
if "apple" in thislist:
  print("Yes, 'apple' is in the fruits list")


thislist = ["apple", "banana", "cherry"]
thislist[1] = "blackcurrant"
print(thislist)


thislist = ["apple", "banana", "cherry", "orange", "kiwi", "mango"]
thislist[1:3] = ["blackcurrant", "watermelon"]
print(thislist)



thislist = ["apple", "banana", "cherry"]
thislist.insert(2, "watermelon")
print(thislist)


thislist = ["apple", "banana", "cherry"]
thislist.append("orange")
print(thislist)




thislist = ["apple", "banana", "cherry"]
thislist.remove("banana")
print(thislist)


thislist = ["apple", "banana", "cherry"]
thislist.pop(1)
print(thislist)


thislist = ["apple", "banana", "cherry"]
del thislist[0]
print(thislist)




thislist = ["apple", "banana", "cherry"]
thislist.clear()
print(thislist)



thislist = ["apple", "banana", "cherry"]
for i in range(len(thislist)):
  print(thislist[i])




thislist = ["apple", "banana", "cherry"]
i = 0
while i < len(thislist):
  print(thislist[i])
  i = i + 1



thislist = ["apple", "banana", "cherry"]
[print(x) for x in thislist]
thislist = ["orange", "mango", "kiwi", "pineapple", "banana"]
thislist.sort()
print(thislist)

m="kusum"
print(sorted(m))

thislist = [100, 50, 65, 82, 23]
thislist.sort(reverse = True)
print(thislist)


fruits = ['apple', 'banana', 'cherry']

x = fruits.count("cherry")




fruits = ['apple', 'banana', 'cherry']

x = fruits.index("cherry")



# tuples


fruits = ("apple", "banana", "cherry")

(green, yellow, red) = fruits

print(green)
print(yellow)
print(red)




#set




thisset = {"apple", "banana", "cherry"}

thisset.add("orange")

print(thisset)


thisset = {"apple", "banana", "cherry"}
tropical = {"pineapple", "mango", "papaya"}

thisset.update(tropical)

print(thisset)



thisset = {"apple", "banana", "cherry"}
mylist = ["kiwi", "orange"]

thisset.update(mylist)

print(thisset)


thisset = {"apple", "banana", "cherry"}

thisset.remove("banana")

print(thisset)  #will raise an error if the item to remove does not exist



thisset = {"apple", "banana", "cherry"}

thisset.discard("banana")

print(thisset) # will not raise an error if the item to remove does not exist




thisset = {"apple", "banana", "cherry"}

x = thisset.pop()


print(x)

print(thisset) #ransomly removes an item, the removed item is returned by the pop() method