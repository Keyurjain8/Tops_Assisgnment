# Write a Python script to concatenate following dictionaries to create a  new one. 
def concatenate_dicts(*dicts):
    # Create an empty dictionary to store the result
    result_dict = {}
    
    # Iterate through each dictionary in the input
    for d in dicts:
        # Update the result dictionary with the current dictionary
        result_dict.update(d)
    
    return result_dict

# Example usage:
dict1 = {'a': 1, 'b': 2}
dict2 = {'c': 3, 'd': 4}
dict3 = {'e': 5, 'f': 6}

# Concatenate the dictionaries
new_dict = concatenate_dicts(dict1, dict2, dict3)

print("Dictionary 1:", dict1)
print("Dictionary 2:", dict2)
print("Dictionary 3:", dict3)
print("Concatenated dictionary:", new_dict)
