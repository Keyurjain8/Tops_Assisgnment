# How will you remove last object from a list? Suppose list1 is [2, 33, 222, 14, and 25], what is list1 [-1]?
list1 = [2, 33, 222, 14, 25]
last_item = list1[-1]
print("Last item in the list:", last_item)  # Output: 25
last_item = list1.pop()
print("List after removing the last item:", list1)
