A = set(map(int, input("Enter set A: ").split()))
B = set(map(int, input("Enter set B: ").split()))

print("Set A:", A)
print("Set B:", B)

print("Union: ", A.union(B))
print("Intersection: ", A.intersection(B))
print("Difference ( A - B ): ", A.difference(B))
print("Difference ( B - A ): ", B.difference(A))

product = set()

for i in A:
    for j in B:
        product.add((i,j))

print("cartesian Product: ", product)