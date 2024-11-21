# Write a Python program to replace last value of tuples in a list.
def replace_last_value(tuples_list, new_value):
    # Create a new list to store the updated tuples
    updated_list = []
    
    # Iterate through each tuple in the list
    for tpl in tuples_list:
        # Replace the last value of the tuple with new_value
        updated_tuple = tpl[:-1] + (new_value,)
        # Add the updated tuple to the new list
        updated_list.append(updated_tuple)
    
    return updated_list

# Example usage:
tuples_list = [(1, 2, 3), (4, 5, 6), (7, 8, 9)]
print("Orignal Tuple list:",tuples_list)
new_value = 100
print("New Value:", new_value)
updated_list = replace_last_value(tuples_list, new_value)
print("Updated list:", updated_list)
