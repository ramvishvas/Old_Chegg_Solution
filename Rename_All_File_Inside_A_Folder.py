
import os
from datetime import datetime,timedelta,date, time

timen = datetime.now();

def date_key(a):
	a = datetime.strptime(a[-23:-4:1], '%Y-%m-%d %H-%M-%S')
	# t = timedelta(a)
	# print(type(a), a)
	return (a-timen)

filenames = os.listdir('/home/ram/Desktop/OS')
filenames = sorted(filenames, key=date_key)
i = 1
for filename in filenames:
	t = str(i).zfill(3)
	rm = t+' '+filename
	# print(t)
	# print(filename)
	print(rm)
	os.rename(filename, rm)
	print(filename)
	i = i + 1