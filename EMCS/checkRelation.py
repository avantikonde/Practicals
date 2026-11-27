A = set(map(int, input("Enter the elements of set A: ").split()))
R = set()

n = int(input("Enter the number of ordered pairs: " ))

for i in range(n):
    a,b = map(int(input("Enter ordered pairs: ").split()))
    R.add((a,b))

if not all( a in A and b in BA for a,b in R):
    print("Invalid relation")

else:
    reflexive