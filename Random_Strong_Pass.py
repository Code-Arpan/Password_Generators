import random
print("Welcome to your Password Generator")

#characters used in making the password
chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&"

num = input("How many Passwords you want to generate? ")
num = int(num)  #inputing number of passwords to generate

len = input("What length of password would you like to generate? ")
len = int(len)   #inputing length of password to generate

print("\n Here are your unique and strong password Sir -")

for pwd in range(num):  
    passwords = ""    #storing the randomly generated password
    for c in range(len):
        passwords += random.choice(chars)
    print(passwords)

