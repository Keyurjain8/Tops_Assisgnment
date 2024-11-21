#Write a Python program to find the highest 3 values in a dictionary
# Define a dictionary
my_dict = {'a': 50, 'b': 100, 'c': 75, 'd': 25, 'e': 150, 'f': 90}

# Get the highest 3 values
highest_values = sorted(my_dict.values(), reverse=True)[:3]

# Print the highest 3 values
print("The highest 3 values are:", highest_values)
