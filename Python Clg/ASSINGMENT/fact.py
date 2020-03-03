import sys


def fact(n):
    s = 1
    num = 1
    while num <= n:
        s = s * num
        num = num + 1
    print("VALUE OF FACTORIAL IS ", s)


#n = int(input('enter the number: \n'))
# fact(n)

if __name__ == "__main__":
    import sys
    fact(int(sys.argv[1]))
