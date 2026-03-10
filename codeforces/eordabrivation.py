
n = int(input())

for _ in range(n):
    word = input()
    if len(word) > 10:
        first_char = word[0]
        last_char = word[-1]
        count = len(word) -2
        print(first_char+str(count)+last_char)
    else:
        print(word)

