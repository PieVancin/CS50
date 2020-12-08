from cs50 import get_float

dollar=float
cent=int
while(True):
    dollar = get_float("Change owed:")
    cent = round(dollar * 100)
while (dollar < 0.00):
    coins = 0
while (cent >= 25):
    coins+1
    cent = cent - 25
while (cent >= 10 and cent < 25):
    coins+1
    cent = cent - 10
while (cent >= 5 and cent < 10):
    coins+1
    cent = cent - 5
while (cent >= 1 and cent < 5):
    coins+1
    cent = cent - 1
print(coins, "coins in return")
    
        
    
    