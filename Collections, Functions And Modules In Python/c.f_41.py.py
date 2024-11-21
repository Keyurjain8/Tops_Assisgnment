#Write a Python program to combine two dictionary adding values for common keys. 
#d1 = {'a': 100, 'b': 200, 'c':300} o d2 = {'a': 300, 'b': 200,’d’:400} 
#Sample output: Counter ({'a': 400, 'b': 400,’d’: 400, 'c': 300}).
from collections import Counter

# Define two dictionaries
d1 = {'a': 100, 'b': 200, 'c': 300}
d2 = {'a': 300, 'b': 200, 'd': 400}

# Use Counter to add values for common keys
combined_dict = Counter(d1) + Counter(d2)

# Print the resulting dictionary
print(combined_dict)

