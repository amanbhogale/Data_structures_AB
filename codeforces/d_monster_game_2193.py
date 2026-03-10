import sys
input = sys.stdin.read

data = sys.stdin.read().split()
index = 0

t = int(data[index])
index += 1

for _ in range(t):
    n = int(data[index])
    index += 1
    a = list(map(int, data[index:index+n]))
    a.sort()
    index += n
    b = list(map(int, data[index:index+n]))
    index += n
    print(a)

