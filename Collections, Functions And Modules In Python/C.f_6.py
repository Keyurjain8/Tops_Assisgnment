#Write a Python program to count the number of strings where the string length is 2 or more and the first and last character are same 
# from a given list of strings.
def count_special_strings(strings):
    count = 0
    for string in strings:
        if len(string) >= 2 and string[0] == string[-1]:
            count += 1
    return count

# Example usage:
strings = ['abc', 'xyz', 'aba', '1221', 'xyx']
result = count_special_strings(strings)
print("Number of special strings:", result)  # Output: 3
