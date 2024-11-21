#Write a Python function that takes a list and returns a new list with unique elements of the first list.
def get_unique_elements(input_list):
    # Convert the list to a set to remove duplicates, then back to a list
    unique_list = list(set(input_list))
    return unique_list

# Example usage:
input_list = [5,4,2,3,5,10,4,2,3,9,8,6,9,8,610]
print(input_list)
unique_elements = get_unique_elements(input_list)
print("List with unique elements:", unique_elements)
    