# Write a Python program to check whether an element exists within a  tuple. 
def element_exists(tup, element):
    # Check if the element is in the tuple
    if element in tup:
        return True
    else:
        return False

# Example usage
my_tuple = (1, 2, 3, 'apple', 4.5)
print(my_tuple)
element_to_check1 = 'apple'
print(element_to_check1)
element_to_check2 = 10
print(element_to_check2)

# Check if the elements exist in the tuple
exists1 = element_exists(my_tuple, element_to_check1)
exists2 = element_exists(my_tuple, element_to_check2)

# Print the results
print(f"Does the element '{element_to_check1}' exist in the tuple? {exists1}")
print(f"Does the element '{element_to_check2}' exist in the tuple? {exists2}")
