
f=open('INPUT', 'w')
f.truncate()
for i in range(0, 1000):
    f.write('1\n')

for i in range(0, 1000):
    f.write('2\n')

for i in range(0, 1000):
    f.write('3\n')

for i in range(0, 1000):
    f.write('4\n')

f.close()
