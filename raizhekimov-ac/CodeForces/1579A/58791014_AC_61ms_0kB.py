Test_Sayi= int(input())
while Test_Sayi > 0:
    Daxil = input().strip()
    if Daxil.count('B') == Daxil.count('A') + Daxil.count('C'):
        print("YES")
    else:
        print("NO")
    Test_Sayi -= 1
