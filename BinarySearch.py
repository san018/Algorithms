#Time complexity for Binary Search - O(log n)
#Note : Can only be applied to the sorted lists


def BinarySearch(sequence,key):
    first = 0
    last = len(sequence)-1
    result = False
    while first<=last and not result:
        mid = first + last//2
        if(sequence[mid] == key):
            result = True
        elif(key < sequence[mid]):
            last = mid-1
        else:
            first = mid+1
    return result

a = [1,2,3,4,5,6,7,8,11,15]
x = 5
r = BinarySearch(a,x)
print(r)





            
    
