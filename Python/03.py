def get_counts(string):
	counts = dict()
	for i in range(len(string)):
		if string[i] in counts.keys():
			counts[string[i]] += 1
		else:
			counts[string[i]] = 1

	sort = sorted(counts.items(), key=lambda kv: kv[1])

	counts = dict()
	for i in range(1, len(sort)+1):
		counts[sort[-i][0]] = sort[-i][1]
	return counts


string = input("Enter a string : ").lower()
count = get_counts(string)

for key, val in count.items():
	print(key, ":", val)
