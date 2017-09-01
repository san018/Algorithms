'''This merging can be used as a part of mergesort- O(nlog(n))
Four Cases must be handle here:
1) If A becomes empty, we need to take elements from B
2) If B becomes empty, we need to take elements from A
3) Else If A's element is lesser or equal, append A[i] & increment i
4) Else if B's element is lesser , append b[j] & increment j
'''

def merge(a,b):
    (c,m,n) = ([],len(a),len(b))
    (i,j) = (0,0)
    while i+j < m+n :
       # print(m,n,i,j)
       #case1
        if j==n:
            c.append(a[i])
            i=i+1
        #case2
        elif i==m:
            c.append(b[j])
            j=j+1
        #case3
        elif a[i] <= b[j]:
            c.append(a[i])
            i=i+1
        #case4
        elif a[i] > b[j]:
            c.append(b[j])
            j=j+1
    return (c)

list1 = [1,4,5,9,11,16,22]
list2 = [2,6,8,11,15,29]
print(merge(list1, list2))
          
    
