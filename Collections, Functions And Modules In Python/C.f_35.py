# How Do You Traverse Through A Dictionary Object In Python? 
sample_dict ={'a' :1, 'b':2, 'c' :3}

#Traverse keys
print("Traverse Keys :")
for key in sample_dict:
    print(f"Key: {key}, Value: {sample_dict[key]}")
    
#Traverse values
print("\nTraverse Values:")
for value in sample_dict.values():
    print(f"values: {value}")
    
#Traverse key-value  pairs
print("\nTraverse Keys in Sorted Order:")
for key, value in sample_dict.items():
    print(f"Key: {key}, Value: {value}")
    
#Traverse key in sorted order
print("\nTraverse keys in sorted Order:")
for key in sorted(sample_dict):
    print(f"Key: {key}, Value: {sample_dict[key]}") 

#Traverse values in sorted order 
print("\nTraverse Values in Sorted Order:")
for value in sorted (sample_dict.values()):
    print(f" Value: {value}")
    
# Traverse key-value pairs in sorted order by keys
print("\nTraverse key-Values pairs in sorted order by Keys:")
for key, value in sorted(sample_dict.items()):
    print(f"Key: {key}, value: {value}")

#Traverse key-value pairs in sorted order by values
print("\nTraverse key-Values pairs in sorted order by values:")
for key, value in sorted(sample_dict.items(), key = lambda item: item[1]):
    print(f"key: {key}, Value: {value}")
