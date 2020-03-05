dividend = int(input("Enter the dividend"))
divisor = int(input("Enter the divisor"))

try:
    qoutient = dividend / divisor
    print(dividend, "/", divisor, "=", qoutient)

except (ZeroDivisionError):
    print(dividend, "/", divisor, "= infinity")

finally:
    print("Division Completed")
