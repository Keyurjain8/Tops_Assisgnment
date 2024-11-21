# Write a Python program to remove duplicates from a list.
def remove_duplicates(input_list):
    unique_list = []
    for item in input_list:
        if item not in unique_list:
            unique_list.append(item)
    return unique_list

# Example usage:
input_list = [1, 2, 2, 3, 4, 4, 5]
print(input_list)
result = remove_duplicates(input_list)
print("List after removing duplicates:", result)  # Output: [1, 2, 3, 4, 5]
