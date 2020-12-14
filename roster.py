import csv
from sys import argv, exit
from cs50 import SQL

#checks the usage
if not len(argv) == 2:
    print("missing command-line argument")

else:
    db = SQL("sqlite:///students.db")

    a_rows = db.execute("SELECT DISTINCT first, middle, last, birth FROM students WHERE house = ? ORDER BY last, first", argv[1])
    
    for row in a_rows:
        if row["middle"] == None:
            print(row["first"] + " " + row["last"] + ", born " + str(row["birth"]))
        else:
            middle = row["middle"].strip()
            print(row["first"] + " " + row["middle"] + " " + row["last"] + ", born " + str(row["birth"]))