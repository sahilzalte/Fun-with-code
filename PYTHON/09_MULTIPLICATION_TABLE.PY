# Get user input
number = int(input("Enter a number to print its multiplication table: "))

# Print the multiplication table
print(f"Multiplication Table of {number}:")
for i in range(1, 11):
    print(f"{number} x {i} = {number * i}")
