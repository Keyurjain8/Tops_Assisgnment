# Write a Python script to print a dictionary where the keys are numbers  between 1 and 15. 
# Create an empty dictionary
num_dict = {}

# Populate the dictionary with keys from 1 to 15 and their squares as values
for i in range(1, 15 + 1):
    num_dict[i] = i * i

# Print the dictionary
print(num_dict)
