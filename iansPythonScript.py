inFile = open("county_adjacency.txt", "r")
outFile = open("outFile.txt", "w")

inQuotes = False
c = inFile.read(1)

while(c):
	if c is '"':
		inQuotes = not inQuotes
	if not inQuotes and c is not '"':
		outFile.write(c)
	c = inFile.read(1)

print("Done")