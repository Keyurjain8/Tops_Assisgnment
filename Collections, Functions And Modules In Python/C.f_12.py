#Write a Python program to convert a list of characters into a string.
def list_to_string(char_list):
    # Use ''.join() to concatenate the characters into a string
    return ''.join(char_list)

# Example usage:
char_list = ['K', 'e', 'y', 'u', 'r']
print(char_list)
resulting_string = list_to_string(char_list)
print("The resulting string is:", resulting_string)
