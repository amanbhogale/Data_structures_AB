n = int(input())
problems = []
for _ in range(n):
    p1 , p2 , p3 = map(int , input().split())
    problems.append((p1 , p2 , p3))
count = 0
for problem in problems:
    if sum(problem) >=2:
        count += 1
print(count)
