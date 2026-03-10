n , k = map(int , input().split())
arr = list(map(int , input().split()))

cut_off_score = arr[k-1] 
counter = 0
for i in range(len(arr)):
    if arr[i] >= cut_off_score and arr[i] > 0:
        counter += 1 
    else:
        break

print(counter)
