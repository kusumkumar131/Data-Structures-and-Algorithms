l=input("Enter elements of the list separated by spaces: ").split()

p=[int(x) for x in l]
print(p)

l=[lambda x: x**2 for x in p]
print(l)

l=tuple([lambda x: x**2 for x in p])
print(l)

m=[lambda x: x+2 for x in p]
print(m)

for i in p:
    print(i**2)

while True:
    try:
        n=int(input("Enter a number to check if it is in the list: "))
        if n in p:
            print(f"{n} is present in the list.")
        else:
            print(f"{n} is not present in the list.")
    except ValueError:
        print("Please enter a valid integer.")
    except KeyboardInterrupt:
        print("\nExiting the program.")
        break

    