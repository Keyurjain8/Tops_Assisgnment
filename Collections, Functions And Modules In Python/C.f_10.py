#Write a Python program to generate and print a list of first and last 5 elements where the values are square of numbers between 1 and 30
# Generate the list of squares
squares = [x**2 for x in range(1, 31)]
print(squares)

# Extract the first 5 elements
first_5 = squares[:5]

# Extract the last 5 elements
last_5 = squares[-5:]

# Print the results
print("First 5 elements:", first_5)
print("Last 5 elements:", last_5)
