t = int(input())

for i in range(t):
    imports = 0
    temp = str(input()).split(" ")
    prev = int(temp[0])
    for val in temp[1:]:
        if val == "0":
            break
        else:
            if int(val) > prev * 2:
                imports = imports + (int(val) - prev * 2)
                prev = int(val)
            else:
                prev = int(val)
    print(imports)
