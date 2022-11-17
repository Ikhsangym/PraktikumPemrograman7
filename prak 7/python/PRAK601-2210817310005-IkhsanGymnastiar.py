baris, kolom = map(int, input().split())
angka=[]
n = 0
isi = list(map(int, input().split()))
for i in range (baris):
          angka.append(isi[n:n+kolom])
          n=n+kolom
for baris in angka:
          for isi in baris:
                    print(isi, end=' ')
          print()          