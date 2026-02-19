prime_list = [1] * 100000001
prime_list[0] = prime_list[1] = 0

def sieve():
    for i in range(2, 100000001):
        if prime_list[i] == 1:
            for j in range(i * 2, 100000001, i):
                prime_list[j] = 0

sieve()

counter = 0
for i in range(2, 100000001):
    if prime_list[i] == 1:
        counter += 1

    if counter % 100 == 1 and prime_list[i] == 1:
        print(i)

"""
for i in range(2, 100000001) == for (int i = 2; i < 100000001; i++)
"""
