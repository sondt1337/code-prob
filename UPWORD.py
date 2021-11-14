import re
n = input()
kq = re.findall("[A-Z]+", n)
print(len(kq))
