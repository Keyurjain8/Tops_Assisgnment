#Write a Python function that takes two lists and returns  true if they haveat least one common member.
def have_common_member(list1, list2):
    # Convert lists to sets for efficient lookup
    set1 = set(list1)
    set2 = set(list2)
    
    # Check for intersection
    return not set1.isdisjoint(set2)

# Example usage:
list1 = [1, 2, 3, 4]
print("List 1:",list1)
list2 = [4, 5, 6]
print("List 2:",list2)
list3 = [7, 8, 6]
print("List 3:",list3)

print("Is list1 and list 2 have a common number ?", have_common_member(list1, list2))  # Output: True (common member: 4)
print("Is list1 and list 3 have a common number ?", have_common_member(list1, list3))  # Output: False (no common members)
print("Is list2 and list 3 have a common number ?", have_common_member(list2, list3))