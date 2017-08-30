''' 
Time Complexity of Selection Sort - O(n^2)

General Procedure: Takes the i th element in the list and searches for the
minimum element in the list and swaps it. When done for whole of list, the list
becomes sorted

'''

def SelectionSort(l):
    for start in range(len(l)):
        minposition = start
        for i in range(start,len(l)):
            if l[i] < l[minposition]:
                minposition = i
        (l[start], l[minposition]) = (l[minposition],l[start])

a = [10,5,8,2,1,7]
SelectionSort(a)
print("After Sorting a list using Selection Sort:  ")
for i in range(len(a)):
    print (a[i])
