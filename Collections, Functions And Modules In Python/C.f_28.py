# Write a Python program to remove an empty tuple(s) from a list of tuples. 


def remove_empty_tuples(tuples_list):
    # Use a list comprehension to filter out empty tuples
    filtered_list = [tpl for tpl in tuples_list if tpl]
    return filtered_list

# Example usage:
tuples_list = [(1, 2), (), (3, 4), (5, 6, 7), (), (8, 9)]
print("Original list:", tuples_list)
filtered_list = remove_empty_tuples(tuples_list)
print("Filtered list:", filtered_list)





