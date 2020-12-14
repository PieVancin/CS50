import csv
from sys import argv, exit
from cs50 import SQL

#checks the usage
if not len(argv) == 2 and argv[1].endswith(".csv"):
    print("missing command-line argument")
    exit(1)

else:
    db = SQL("sqlite:///students.db")

    #read the file
    file = open(argv[1], 'r')
    reader = csv.DictReader(file)
    
    for row in reader:
        names = row["name"]
        a_name = names.split()

        if len(a_name) == 2:
            first_name = a_name[0]
            last_name = a_name[1]
            db.execute("INSERT INTO students (first, middle, last, house, birth) VALUES(?,?,?,?,?)", first_name, None, last_name, row["house"], row["birth"])

        elif len(a_name) == 3:
            first_name = a_name[0]
            middle_name = a_name[1]
            last_name = a_name[2]
            db.execute("INSERT INTO students (first, middle, last, house, birth) VALUES(?,?,?,?,?)", first_name, middle_name, last_name, row["house"], row["birth"])
