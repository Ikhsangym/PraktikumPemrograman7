n = int(input())
matriksA = []
print("Matriks A")
for i in range (n):
    k = list(map(int, input().split()))
    matriksA.append(k)
matriksB = []
print("Matriks B")
for i in range (n):
    k = list(map(int, input().split()))
    matriksB.append(k)
matriksAB = []
print("Matriks AXB")
for i in range (n):
    matriksAB.append([])
    for j in range (n):
        x = 0
        for k in range (n):
            x = x + matriksA[i][k] * matriksB[k][j]
        matriksAB[i].append(x)
for baris in matriksAB:
    for k in baris:
        print(k, end=' ')
    print()