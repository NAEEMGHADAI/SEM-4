def prime(num):
    i, j = 1, 2
    print(i)
    for val in range(i, num+1):
        if val > 1:
            for n in range(2, val):
                if (val % n) == 0:
                    break
            else:
                print(val)


#num = int(input("ENTER THE NUMBER: \n"))
# prime(num)

if __name__ == "__main__":
    import sys
    prime(int(sys.argv[1]))
