import sys
n = int(input())
capacity = int(input())
values = list(map(int, input().split()))
weights = list(map(int, input().split()))

items = list(map(list , zip(values, weights)))
print(items)


def knapsack(items, capacity , n):
    cost = []
    value = 0.0
    #cost = iter items with value per unit weights
    #listcomprehension to calculate the cost of each item and store it in a list
    cost = [(p , w , p/w) for p , w in items]
    cost.sort(key = lambda x : x[2] , reverse = True)
    print(cost)
    for i in range(n):
        if capacity == 0:
            break
        if cost[i][1] <= capacity:
            value += cost[i][0]
            capacity -= cost[i][1]
        else:
            value += cost[i][2] * capacity
            break
    print(value)
    return value

    




knapsack(items, capacity, n)
