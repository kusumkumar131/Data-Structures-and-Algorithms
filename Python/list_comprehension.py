l=input("Enter elements of the list separated by spaces: ").split()

p=[int(x) for x in l]
print(p)

l=[lambda x: x**2 for x in p]