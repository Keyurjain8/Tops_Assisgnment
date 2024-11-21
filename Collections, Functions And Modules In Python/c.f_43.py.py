# Why Do You Use the Zip () Method in Python?
#zip() is used for pairing elements from multiple iterables.
###It is memory-efficient and stops at the shortest iterable when lengths differ.

list1 = ["a", "b", "c"]
list2 = [1, 2, 3]
zipped = zip(list1, list2)
print(list(zipped))  # [('a', 1), ('b', 2), ('c', 3)]
