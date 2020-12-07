import sys
import cs50
import csv
import sqlite3


if (len(sys.argv) !=2):
    print("Error: Incorrect Command-line Arguments")
    exit (1)
    
house_u = sys.argv[1]

db = cs50.SQL("sqlite:///students.db")

list_dicts = db.execute("SELECT first, middle, last, birth FROM students WHERE house = (?) ORDER BY last, first", (house_u)) 
for row in list_dicts:
    if (row ["middle"] ==  None):
        print(row["first"] + " " + row["last"] + ", born" + " " + str(row["birth"]) )
    else:
        print(row["first"] + " " + row["middle"] + " " + row["last"] + ", born" + " " + str (row["birth"]))