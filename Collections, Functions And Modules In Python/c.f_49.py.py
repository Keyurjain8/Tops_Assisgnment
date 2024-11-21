# Write a Python function to check whether a number is in a given range
def is_in_range(num, start, end):
    # Check if num is between start and end (inclusive)
    if start <= num <= end:
        return True
    else:
        return False

# Example usage
number = 5
range_start = 1
range_end = 10

if is_in_range(number, range_start, range_end):
    print(f"{number} is in the range {range_start} to {range_end}.")
else:
    print(f"{number} is not in the range {range_start} to {range_end}.")
