import os, shutil, random, time

path = os.getcwd()

try:
	os.mkdir(path + '/' + 'validation')
	os.mkdir(path + '/' + 'validation' + '/' + 'cracked')
	os.mkdir(path + '/' + 'validation' + '/' + 'uncracked')

except OSError:
	print("Already present")


rng1 = random.sample(range(0,len(os.listdir(path+ '/' + 'train' + '/' + 'cracked')) - 1),int(len(os.listdir(path+ '/' + 'train' + '/' + 'cracked')) * 0.3))
rng1.sort()

rng2 = random.sample(range(0,len(os.listdir(path+ '/' + 'train' + '/' + 'uncracked')) - 1),int(len(os.listdir(path+ '/' + 'train' + '/' + 'uncracked')) * 0.3))
rng2.sort()


print("\n---------CRACKED-------\n")

print("Total Number of Files in Cracked ->", len(os.listdir(path+ '/' + 'train' + '/' + 'cracked')),"\n",
	"30% of Total Cracked File ->",len(rng1), "\n",
	"Last File Position ->" ,rng1[-1], "\n", 
	"Last File Name:", os.listdir(path + '/' + 'train' + '/' + 'cracked')[rng1[-1]])

for i in range(0,len(rng1)):
	print("\nPosition:  ", i)
	print(rng1[i], "-->", os.listdir(path + '/' + 'train' + '/' + 'cracked')[rng1[i]], "\n")
	time.sleep(1)
	try:
		shutil.move(os.path.join(path+ '/' + 'train' + '/' + 'cracked', os.listdir(path + '/' + 'train' + '/' + 'cracked')[rng1[i]]), path + '/' + 'validation' + '/' + 'cracked')

	except:
		print("Cant Get Data \n")

print("\n---------UNCRACKED-------\n")

print("Total Number of Files in UnCracked ->", len(os.listdir(path+ '/' + 'train' + '/' + 'uncracked')),"\n",
	"30% of Total UnCracked File ->",len(rng2), "\n",
	"Last File Position ->" ,rng2[-1], "\n",
	"Last File Name:", os.listdir(path + '/' + 'train' + '/' + 'uncracked')[rng2[-1]])


for i in range(0,len(rng2)):
	print("\nPosition:  ", i,"\n")
	print(rng2[i],"-->",os.listdir(path + '/' + 'train' + '/' + 'uncracked')[rng2[i]], "\n")
	time.sleep(1)
	try:
		shutil.move(os.path.join(path+ '/' + 'train' + '/' + 'uncracked', os.listdir(path + '/' + 'train' + '/' + 'uncracked')[rng2[i]]), path + '/' + 'validation' + '/' + 'uncracked')
	except:
		print("Cant Get Data \n")
