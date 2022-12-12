# Function to reverse A[ ] from start to end 
def reverseList(A , start , end):
    if start >= end:
        return 
    A[start] , A[end] = A[end] , A[start]
    reverseList(A  , start+1 , end-1)
    

A = [1 ,2 , 3, 4, 5 , 6]
print(A)
reverseList(A , 0 ,5)
print("Reverse List is: ")
print(A)