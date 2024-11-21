# Write a Python program to unzip a list of tuples into individual lists.
def unzip_tuples(tuples_list):
    #use the zip function with unpacking operator (*) to unzip the list of tuples
    unzipped_lists = list(zip(*tuples_list))
    return [list(tpl) for tpl in unzipped_lists]

tuples_list = [(1,2,3),(4,5,6),(7,8,9)]
print("Original list of tuples:", tuples_list)
unzipped_lists = unzip_tuples(tuples_list)
print("Unzipped lists:",unzipped_lists)















