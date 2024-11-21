# Write a Python program to create and display all combinations of letters, selecting each letter from a different key in a dictionary.
# Sample data: {'1': ['a','b'], '2': ['c','d']} Expected Output: ac ad bc bd

import itertools

# Define the dictionary
data = {"1": ["a", "b"], "2": ["c", "d"]}

# Use itertools.product to generate combinations
combinations = list(itertools.product(*data.values()))

# Convert each tuple into a string and display the result
for combination in combinations:
    print("".join(combination))
