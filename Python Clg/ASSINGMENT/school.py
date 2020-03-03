def school(name, roll, division):
    students = [name, roll, division]
    return students


std = []
choice = int(
    input('ENTER 1-Add Detail\n2-Display\n3-Search\n4-Delete Contact\n'))
while choice != 5:

    if choice == 1:
        name = input('Enter The Name\t')
        roll = int(input('Enter the roll no.\t'))
        division = input('Enter the division\t')
        std.append(school(name, roll, division))

    elif choice == 2:
        print(std)

    elif choice == 3:
        r = int(input('Enter the roll no.:\t'))
        for s in std:
            for i in s:
                if (i in s) == r:
                    print(s)
                    break

    elif choice == 4:
        r = int(input('Enter The Roll no. to Delete:\t'))
        for s in std:
            for i in s:
                if (i in s) == r:
                    std.remove(s)
                    break

    choice = int(input('ENTER 1-Add Detail\n2-Display\n3-Search\n4-Delete\n'))
