# Write a Python program to check whether a list contains a sub list 
def contains_sublist(main_list, sub_list):
    # Get the lengths of the main list and the sublist
    main_len = len(main_list)
    sub_len = len(sub_list)
    
    # Loop through the main list with a window of the length of the sublist
    for i in range(main_len - sub_len + 1):
        # Check if the current window matches the sublist
        if main_list[i:i + sub_len] == sub_list:
            return True
    return False

# Example usage:
main_list = [1, 2, 3, 4, 5, 6]
print( "Main List :",main_list)
sub_list = [3, 4]
print("Sub List :",sub_list)
print("Does the main list contain the sublist?", contains_sublist(main_list, sub_list))  # Output: True
not_sub_list = [4, 6]
print("Not Sub List :",not_sub_list)
print("Does the main list contain the sublist?", contains_sublist(main_list, not_sub_list))  # Output: False
