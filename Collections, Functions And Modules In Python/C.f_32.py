#  Write a Python script to sort (ascending and descending) a dictionary by  value.
def sort_dict_by_value(d, ascending=True):
    # Sort the dictionary by value
    sorted_items = sorted(d.items(), key=lambda item: item[1], reverse=not ascending)
    return dict(sorted_items)

# Example usage:
sample_dict = {'a': 3, 'b': 1, 'c': 2, 'd': 5, 'e': 4}
print(sample_dict)

# Sort in ascending order
sorted_dict_asc = sort_dict_by_value(sample_dict, ascending=True)
print("Original dictionary:", sample_dict)
print("Sorted dictionary (ascending):", sorted_dict_asc)

# Sort in descending order
sorted_dict_desc = sort_dict_by_value(sample_dict, ascending=False)
print("Sorted dictionary (descending):", sorted_dict_desc)
