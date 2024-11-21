# Write a Python program to select an item randomly from a list.

import random

def select_random_item(input_list):
    # Use random.choice() to select a random item from the list
    return random.choice(input_list)

# Example usage:
items = ['apple', 'banana', 'cherry', 'date', 'elderberry']
random_item = select_random_item(items)
print("Randomly selected item:", random_item)
