# Write a Python program to split a list into different variables.
# Example list
example_list = [1, 2, 3, 4, 5]
print(example_list)

# Splitting the list into multiple variables dynamically
variables = [None] * len(example_list)  # Create a list of None with the same length
for i in range(len(example_list)):
    variables[i] = example_list[i]

# Printing the variables to verify
for index, value in enumerate(variables):
    print(f"Variable {index + 1}:", value)

