steps=int(input("eNTER THE NUMBER OF STEPS FOR PYRAMID:"))
for i in range(1,steps+1):
    for j in range(1,i+1):
        print(i*j,end="")
    print()