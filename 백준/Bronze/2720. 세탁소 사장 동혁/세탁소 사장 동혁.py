def change(Cent,unit):
    count = Cent // unit
    Cent %= unit
    return count, Cent
    
T = int(input())

for _ in range(T):
    Cent = int(input())
    Quarter, Cent = change(Cent,25)
    Dime, Cent = change(Cent,10)
    Nickel, Cent = change(Cent,5)
    Penny = Cent
    print(Quarter, Dime, Nickel, Penny)