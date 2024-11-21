#Write a Python program to find the second smallest number in a list.
def find_second_smallest(input_list):
    # Convert the list to a set to remove duplicates
    unique_list = list(set(input_list))
    
    # Check if there are at least two unique elements
    if len(unique_list) < 2:
        return None  # Return None if there are not enough unique elements
    
    # Sort the unique list
    unique_list.sort()
    
    # Return the second smallest element
    return unique_list[1]

# Example usage:
numbers = [5, 3, 9, 1, 7, 3, 9]
print("list :" ,numbers)
second_smallest = find_second_smallest(numbers)
print("The second smallest number is:", second_smallest)
