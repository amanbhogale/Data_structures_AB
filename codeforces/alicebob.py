import sys
input = sys.stdin.read

data = input().split()
index = 0
t = int(data[0])
for _ in range(t):
    index += 1
    n = int(data[index])
    print(n)
    index += 1
    a = int(data[index]) 
    print(a)
    index += 1
    v = list(map(int, data[index:index + n]))
    index += n -1
    #vk is last element in v
    vk = v[-1]
    print(' '.join(map(str, v)))
    b =  vk - a+ 1
    print(b)
