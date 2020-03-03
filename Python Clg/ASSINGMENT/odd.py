def odd(n):
    i = 1
    while (i < n):
        print(i)
        i = i + 2


#n = int(input("ENTER THE NUMBER: "))
# odd(n)

if __name__ == "__main__":
    import sys
    odd(int(sys.argv[1]))
