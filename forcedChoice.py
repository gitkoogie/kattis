N, P, S = str(input()).split(" ")
for i in range(int(S)):
    m = str(input()).split(" ")
    if P in m[1:]:
        print("KEEP")
    else:
        print("REMOVE")
