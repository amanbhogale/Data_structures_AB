
from typing import Counter

Dicto = {1 : 1 , 2: 3 , 4:5}

x = [1 , 2, 2, 1, 1]
print(Dicto.items())
print(Dicto.values())
print(Dicto.keys())


freq_dict = Counter(x)
print(freq_dict.items())
print(freq_dict.values())
print(freq_dict.keys())

threshold = len(x) // 2

for element , counter in freq_dict.items():
    if counter > threshold:
        print(element)
