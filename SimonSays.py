n = int(input())

for i in range(n):
    temp = str(input())
    if "Simon says" in temp:
        print(temp[temp.find("Simon says ") + len("Simon says "):])
