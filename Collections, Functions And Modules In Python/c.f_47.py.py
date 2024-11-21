#Write a Python program to create a dictionary from a string.

input_string = "hello world"

# Create an empty dictionary to store character counts
char_count = {}

# Iterate over each character in the string
for char in input_string:
    if char in char_count:
        char_count[char] += 1  # Increment the count if the character exists
    else:
        char_count[char] = 1   # Initialize the count if the character is new

# Print the resulting dictionary
print(char_count)
