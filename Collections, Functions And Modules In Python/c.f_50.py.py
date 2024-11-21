#Write a Python function to check whether a number is perfect or not. 
def is_perfect(number):
    # A perfect number must be positive
    if number <= 0:
        return False
    
    # Find the sum of proper divisors
    divisors_sum = 0
    for i in range(1, number):
        if number % i == 0:
            divisors_sum += i
    
    # Check if the sum of divisors is equal to the number
    return divisors_sum == number

# Example usage
num = 28
if is_perfect(num):
    print(f"{num} is a perfect number.")
else:
    print(f"{num} is not a perfect number.")
