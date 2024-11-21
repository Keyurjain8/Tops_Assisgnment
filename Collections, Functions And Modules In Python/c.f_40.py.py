#Write a Python program to map two lists into a dictionary
# Two lists
keys = ['name', 'age', 'city']
values = ['Alice', 25, 'New York']

# Mapping two lists into a dictionary
mapped_dict = dict(zip(keys, values))

# Output the dictionary
print(mapped_dict)
