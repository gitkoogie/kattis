s, t, n = str(input()).split(" ")

d = str(input()).split(" ")
b = str(input()).split(" ")
c = str(input()).split(" ")

# depart
res = int(s)
res = res + int(d[0])

for i in range(len(d) - 1):

    print("res at busstop: ", res)
    # wait for bus
    if res % int(c[i]) != 0:
        res = res + int(c[i]) - (res % int(c[i]))

    print("res after waiting: ", res)
    # ride bus
    res = res + int(b[i])
    print("res after busride: ", res)

    # time to walk
    res = res + int(d[i + 1])
    print("res after walking: ", res)

if res <= int(t):
    print("yes")
else:
    print("no")
