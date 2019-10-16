# 
# @author: srvsaha
# Link: https://www.hackerrank.com/challenges/cut-the-sticks
#
n = int(input().strip())
arr = [int(arr_temp) for arr_temp in input().strip().split(' ')]
arr = sorted(arr)
modified_array = arr
while len(modified_array) != 0:
    modified_array = []
    number_of_sticks = len(arr)
    cut_size = arr[0]
    print(number_of_sticks)
    count = 0
    for i in range(number_of_sticks):
        arr[i] -= cut_size
        if arr[i] > 0:
            modified_array.append(arr[i])
        else:
            continue
    arr = modified_array
