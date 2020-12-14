import csv
from collections import defaultdict
import sys

# Checks the usage
if len(sys.argv) != 3:
    print("Usage: python dna.py databases/size.csv sequences/x.txt")
    exit()
    
csvfile = sys.argv[1]
file = sys.argv[2]

csv_file = open (csvfile, "r")
csv_read = csv.DictReader(csv_file)
fields = csv_read.fieldnames
strs = fields[1:]

seq_file = open (file, "r")
seq_reader = seq_file.read()
seq_file.seek(0)

j = defaultdict(int)
k = defaultdict(int)

for x in strs:
    for counter, y in enumerate(seq_reader):
        seq_file.seek(counter)
        current_chunk = seq_file.read(len(x))
        index = counter 
        i = 1
        while current_chunk == x:
            j[counter] += 1
            currentindex = index + (i * len(x))
            seq_file.seek(currentindex)
            current_chunk = seq_file.read(len(x))
            i += 1
    max_tuple = max(j.items(), key=lambda k: k[1])
    max_value = max_tuple[1]
    j.clear()
    k[x] = max_value

for row in csv_read:
    matches = 0
    for STR in strs:
        if k[STR] == int(row[STR]):
            matches = matches + 1
        else:
            pass
        if matches == len(strs):
            print(row["name"])
            exit(1)
print("there's no match")