import math

radius = float(input("Enter radius of circle : "))
print("Area of circle :", math.pi*radius**2)

ext = {'py': 'Python', 'c': 'C Program', 'java': 'Java class', 'cpp': 'C++ Program', 'txt': 'Text File'}
keys = ext.keys()

filename = input("Enter filename : ")
index = filename.index(".")

if index == -1:
	print("Invalid Input")
elif filename[index+1:] not in keys:
	print("Unknown File")
else:
	print(ext[filename[index+1:]], "File")
