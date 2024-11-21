# Write a Python program to print all unique values in a dictionary.
# Define a dictionary
my_dict = {"a": 10, "b": 20, "c": 10, "d": 30, "e": 20, "f": 40}

# Use set to get unique values
unique_values = set(my_dict.values())

# Print the unique values
print("Unique values:", unique_values)
