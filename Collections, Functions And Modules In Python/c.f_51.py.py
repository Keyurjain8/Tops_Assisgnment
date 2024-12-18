# Write a Python function that checks whether a passed string is  palindrome or not
def is_palindrome(s):
    # Remove spaces and convert to lowercase for comparison
    s = s.replace(" ", "").lower()
    
    # Check if the string is equal to its reverse
    return s == s[::-1]

# Example usage
input_string = "A man a plan a canal Panama"
if is_palindrome(input_string):
    print(f"'{input_string}' is a palindrome.")
else:
    print(f"'{input_string}' is not a palindrome.")
