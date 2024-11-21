# Write a Python program to find the maximum and minimum numbers 
#from the specified decimal numbers.
def find_max_min(numbers):
    # Finding the maximum and minimum from the list
    max_num = max(numbers)
    min_num = min(numbers)
    return max_num, min_num

# Example usage
decimal_numbers = [12.5, 3.6, 7.8, 15.9, 0.4]

max_num, min_num = find_max_min(decimal_numbers)

print(f"The maximum number is: {max_num}")
print(f"The minimum number is: {min_num}")
