from cs50 import get_float

dollar = float
cent = int

# prompts user to input the amount owed
dollar = get_float("Change owed:")
cent = dollar * 100
coins = 0

# ask again if the input is less then 0
if dollar <0:
    dollar = get_float("Change owed:")

# adds the coins for the respective change     
while cent >= 25:
    coins+=1
    cent = cent - 25
while cent >= 10:
    coins+=1
    cent = cent - 10
while cent >= 5:
    coins+=1
    cent = cent - 5
while cent >= 1:
    coins+=1
    cent = cent - 1
    
# print the result
print(coins, "coins in return")