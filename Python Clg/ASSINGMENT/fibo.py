def fibo(n):
    a, b = 0, 1
    while (a < n):
        print(a, ' ')
        a, b = b, a + b
    print()


# fibo(1000)

if __name__ == "__main__":
    import sys
    fibo(int(sys.argv[1]))
