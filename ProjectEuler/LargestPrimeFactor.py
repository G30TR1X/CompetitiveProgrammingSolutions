from math import sqrt, floor

def sieve_of_erastothenes(array: list[bool]) -> None:
    for i in range(2, len(array)):
        if array[i]:
            for j in range(i * i, len(array), i):
                array[j] = False

def main():
    n = 600851475143;
    sqrt_n = floor(sqrt(n))

    prime = [True] * sqrt_n
    sieve_of_erastothenes(prime)

    for i in range(sqrt_n-1, 2, -1):
        if prime[i]:
            if n % i == 0:
                print(i)
                break

if __name__ == "__main__":
    main()
