# Write a Python program to convert a list of tuples into a dictionary. 
def tuples_to_dict(tuples_list):
    # convert list of tuples to dictionary
    result_dict = dict(tuples_list)
    return result_dict

tuples_list = [(1, 'a'), (2, 'b'),(3, 'c')]
print("Original list of tuples:", tuples_list)
result_dict = tuples_to_dict(tuples_list)
print("Converted dictionary:",result_dict)

