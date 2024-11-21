#  Write a Python program to find the repeated items of a tuple. 
def find_repeated_items(tpl):
    # Create a dictionary to store the count of each items
    item_count = {}

    #Iterate through each items in the tuple
    for item in tpl:
        #Increment the count of the item in the dictionary
        if item in item_count:  
            item_count[item] += 1
        else:
            item_count[item] = 1
    # Extract items that have a  coumt greater than 1
    repeated_items = [item for item, count in item_count.items() if count > 1]
                      
    return repeated_items
tpl = (1,2,3,4,5,6,1,2,7,8,9,4)
repeated_items = find_repeated_items(tpl)

print("Original tuple:", tpl)
print("Repeated items:",repeated_items)
            
      

