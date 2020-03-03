#base = int(input("ENTER THE BASE: "))

#power = int(input("ENTER THE POWER: "))


def expo(base, power):
    result = 1
    while (power > 0):
        result = base * result
        power = power - 1
    print(result)
    # return result


#ans = expo(base, power)

# print(ans)

if __name__ == "__main__":
    import sys
    expo(int(sys.argv[1]), int(sys.argv[2]))
