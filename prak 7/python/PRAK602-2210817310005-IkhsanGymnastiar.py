ruang = int(input())
jumlah = []
zp = list(map(int, input().split()))
for i in range (ruang):
          print((i+1)*zp[i], end= ' ')