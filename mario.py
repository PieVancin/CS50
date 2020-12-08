from cs50 import get_int


# Asks the height of the wall
while True:
 n = get_int("Height: ")
 if n > 0 and n < 9:
  break

#loop
for i in range(n):
 print((n - 1 - i) * " ", end="")
 print((i + 1) * "#")