import random
print("Welcome to your Password Generator")
chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890~`! @#$%^&*()_-+={[}]|\:;<,>.?/"

num = input("How many Passwords you want to generate? ")
num = int(num)

len = input("What length of password would you like to generate? ")
len = int(len)

print("\n Here are your unique and strong password Sir -")

for pwd in range(num):
    passwords = ""
    for c in range(len):
        passwords += random.choice(chars)
    print(passwords)

