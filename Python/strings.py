name="KusumKumarReddy"
name=name.lower()
# name=name.upper()
print(name.find("kumar"))  #find return the index of the first occurrence of the substring if found in the string. If not found, it returns -1.
print(name[::-1])  #reverse the string
 
 #how to print factorial of a number using recursion
# def factorial(n):
#     if n==0 or n==1:
#         return 1
#     else:
#         return n*factorial(n-1)

# print(factorial(5))  #print the factorial of 5

print(name.replace("kumar","reddy"))  #replace the substring with another substring



# in keyword used to check if a substring is present in the string or not. It returns True if the substring is present, otherwise it returns False.

print("kumar" in name)  #True