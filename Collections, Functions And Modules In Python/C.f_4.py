#Write a Python function to get the largest number, smallest num and sum 
# of all from a list.
def list_stats(numbers):
    if not numbers:  # Check if the list is empty
        return None, None, 0

    largest = max(numbers)
    smallest = min(numbers)
    total_sum = sum(numbers)

    return largest, smallest, total_sum

# Example usage:
numbers = [14, 8, 21, 3,28]
largest, smallest, total_sum = list_stats(numbers)

print("Largest number:", largest)  # Output: 222
print("Smallest number:", smallest)  # Output: 2
print("Sum of all numbers:", total_sum)  # Output: 296
