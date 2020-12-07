import csv
import re
from sys import argv
from cs50 import SQL


if not len(argv) == 2:
    print("usage: python import.py characters.csv")
    exit(1)


db = SQL("sqlite:///students.db")


with open(argv[1], "r") as file:
    file = csv.DictReader(file, delimiter = ",")
    chars = list(file)
    for row in chars:
        name = row["name"]
        house = row["house"]
        birth = row["birth"]
        full = name.split(" ")
    
    if len(full) == 2:
        first = full[0]
        last = full[1]
        db.execute("INSERT INTO students (first, middle, last, house, birth) VALUES(?, ?, ?, ?, ?)",
        first, None, last, house, birth)

    elif len(full) == 3:
        first = full[0]
        middle = full[1]
        last = full[2]
        db.execute("INSERT INTO students (first, middle, last, house, birth) VALUES(?, ?, ?, ?, ?)",
        first, middle, last, house, birth)  