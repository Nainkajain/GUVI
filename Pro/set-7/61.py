string1 = input()
string2 = input()

string3 = ''
for i in range(len(string1)):
    d = ord(string1[i]) + ord(string2[i]) - 194
    string3 += chr( 98 + d%26)

print(string3)
