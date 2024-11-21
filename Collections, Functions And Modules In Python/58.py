#Write a Python program to read a random line from a file.
import random

def read_random_line(filename):
    # Open the file and read all lines into a list
    with open(filename, 'r') as file:
        lines = file.readlines()
        
    # Pick a random line from the list
    return random.choice(lines).strip()  # Using strip() to remove any leading/trailing whitespace

# Example usage
filename = 'sample.txt'  # Replace with your file path
random_line = read_random_line(filename)
print(f"Random line from file: {random_line}")
