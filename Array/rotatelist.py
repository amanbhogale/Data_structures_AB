def Rotate(arr , d , n):
    p =1
    while(p<=d):
        last = arr[0]
        for i in range(n-1):
            arr[i] = arr[i+1]
        arr[n-1] = last
        p = p+1
def printArray(arr , size):
    for i in range(size):
        print(arr[i] , end=" ")

arr = [1 ,2 ,3 ,4 ,5, 6 , 7]
N = len(arr)
d=2
Rotate(arr , d , N)
printArray(arr , N)