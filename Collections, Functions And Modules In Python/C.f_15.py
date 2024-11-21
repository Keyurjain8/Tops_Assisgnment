def get_unique_values(input_list):
    unique_list = []
    seen = set()
    for item in input_list:
        if item not in seen:
            unique_list.append(item)
            seen.add(item)
    return unique_list

# Example usage:
input_list = [99,56,45,78,99,88,23,61,45,77,61]
print(input_list)
unique_values = get_unique_values(input_list)
print("Unique values (ordered):", unique_values)

