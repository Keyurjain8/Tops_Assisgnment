# Write a Python script to check if a given key already exists in a  dictionary.
def key_exists(d,key):
    # Checks if the key exists in the dictionary
    return key in d

# Example usage:
sample_dict = {'a': 1,'b': 2, 'c': 3}

# Key to Check
key_to_check = 'b'
# Check if the key exists in the dictionary
exists = key_exists(sample_dict, key_to_check)
print("Dictionary:", sample_dict)
print(f"Does the key '{key_to_check}' exist?:{exists}")
#checking for a non-existent key
key_to_check = 'z'
exists = key_exists(sample_dict, key_to_check)
print(f"Does the key '{key_to_check}' exist?: {exists}")


