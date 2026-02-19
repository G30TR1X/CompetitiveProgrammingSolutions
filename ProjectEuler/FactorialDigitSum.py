def main() -> None:
    num = factorial(100)

    final_digit = 0
    while num != 0:
        final_digit += num % 10
        num //= 10

    print(final_digit)

def factorial(n: int) -> int:
    if (n <= 0):
        return 1
    
    value = 1
    for i in range(1, n+1):
        value *= i

    return value

if __name__ == '__main__':
    main()
