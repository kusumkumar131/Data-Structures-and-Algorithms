l={1: "apple", 2: "banana", 3: "cherry"}
print(l)

for key in l:
    print(key, l[key])
for key, value in l.items():
    print(key, value)

for key in l.keys():
    print(key)