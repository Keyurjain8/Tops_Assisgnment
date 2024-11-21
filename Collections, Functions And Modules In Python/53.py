# How can you pick a random item from a list or tuple?

import random

# Sample list and tuple
my_list = [10, 20, 30, 40, 50]
my_tuple = ("apple", "banana", "cherry", "date")

# Pick a random item from the list
random_item_list = random.choice(my_list)
print(f"Random item from list: {random_item_list}")

# Pick a random item from the tuple
random_item_tuple = random.choice(my_tuple)
print(f"Random item from tuple: {random_item_tuple}")
