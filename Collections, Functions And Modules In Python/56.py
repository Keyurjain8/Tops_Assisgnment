# How will you set the starting value in generating random numbers?

import random

# Set the seed value
random.seed(42)

# Generate random numbers
print(random.randint(1, 10))  # Random integer between 1 and 10
print(random.random())        # Random float between 0 and 1
