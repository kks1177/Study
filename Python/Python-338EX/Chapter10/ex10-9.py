# ex10-9.py

import csv

file_name = "weather.csv"
f = open(file_name, "r", encoding="utf-8")
lines = csv.reader(f)

for line in lines:
    print(line)

f.close()
