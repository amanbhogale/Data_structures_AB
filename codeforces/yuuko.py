import sys
input = sys.stdin.read
data = input().split()
index = 0
t = int(data[index])
index += 1

for _ in range(t):
    n = int(data[index])
    index += 1
    a = list(map(int, data[index:index+n]))
    index += n
    
    # Candidate 1: All -1 → 0
    result1 = a[:]
    for i in range(n):
        if result1[i] == -1: result1[i] = 0
    sum1 = abs(result1[-1] - result1[0])
    
    # Candidate 2: Make ends equal (if one end fixed)
    result2 = a[:]
    if a[0] == -1 and a[-1] != -1:
        result2[0] = result2[-1]
    elif a[-1] == -1 and a[0] != -1:
        result2[-1] = result2[0]
    else:  # Both -1 or both fixed
        for i in range(n):
            if result2[i] == -1: result2[i] = 0
    
    for i in range(1, n-1):
        if result2[i] == -1: result2[i] = 0
    
    sum2 = abs(result2[-1] - result2[0])
    
    # Choose lex-smallest with minimum sum
    if sum2 < sum1:
        result = result2
        min_sum = sum2
    elif sum1 < sum2:
        result = result1
        min_sum = sum1
    else:
        # Same sum → lex smallest
        result = min(result1, result2)
        min_sum = sum1
    
    print(min_sum)
    print(' '.join(map(str, result)))

