import sys
from cs50 import SQL

if len(sys.argv) != 2:
    print("its two command-line argument")
    exit(1)

db = SQL("sqlite:///students.db")

house = sys.argv[1]

results = db.execute("SELECT * FROM students WHERE house = ? ORDER BY last ASC, first ASC", house)


for row in results:
    if row["middle"] != None:
        print(f'{row["first"]} {row["middle"]} {row["last"]}, born {row["birth"]}')
    else:
        print(f'{row["first"]} {row["last"]}, born {row["birth"]}')