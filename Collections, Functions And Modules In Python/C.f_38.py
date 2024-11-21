# Write a Python program to check multiple keys exists in a dictionary

def check_keys_exist(dictionary, keys):
    return all(key in dictionary for key in keys)

# Example dictionary
my_dict = {'a': 1, 'b': 2, 'c': 3, 'd': 4}

# Keys to check
keys_to_check = ['a', 'c', 'e']

# Check if all keys exist in the dictionary 
if check_keys_exist(my_dict, keys_to_check):
    print("All keys are present in the dictionary.")
else:
    print("Not all keys are present in the dictionary.")
