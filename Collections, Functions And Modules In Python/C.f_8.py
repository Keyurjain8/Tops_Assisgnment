# Write a Python program to check a list is empty or not.
def is_list_empty(input_list):
    return input_list == []

# Example usage:
print("-------Empty list-------")
empty_list = []
print(empty_list)
print("Is the list empty?", is_list_empty(empty_list))  # Output: True
print("-------Non-Empty list-------")
non_empty_list = [1, 2, 3]
print(non_empty_list)


print("Is the list empty?", is_list_empty(non_empty_list))  # Output: False
