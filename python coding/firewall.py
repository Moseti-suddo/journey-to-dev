import random #Choosing something random in a list or integers
import time #sleep, 




def admin_details():
    print("Welcome to a basic firewall")
    print("................")

    while True:
        x = input("Enter a 4 digit password: ")
        if x.isdigit() and len(x)==4:
            print("Password saved successfully")
            break
        else:
            print("Please enter a valid pin")

    while True:
        y = input("Enter your pin: ")
        if y==x:
            print("Login successful")
            break
        else:
            print("Please try again")
            print("You have to wait for 5s.........>")
            seconds = 5

            for i in range(5):
                print(i)
                time.sleep(1)
            
          

admin_details()

block_list = {
    "192.168.1.1",
    "192.168.1.24",
    "192.168.1.12",
    "192.168.1.5",
    "192.168.1.17",
    "192.168.1.31",
    "192.168.1.8",
    "192.168.1.25",
    "192.168.1.15",
    "192.168.1.6",
    "192.168.1.19",
    "192.168.1.21",
    "192.168.1.10",
    "192.168.1.7",
    "192.168.1.3"
}


def random_ip():
    return f"192.168.1.{random.randint(0,50)}"

def error_code():
    return f"Error code {random.randint(5555 , 9999)}"

for _ in range(15):
    random_ip()

    x = random_ip()
    y = error_code()

    if x in block_list:
        print(f"ip{x} has been blocked by {y}")
    else:
        print(f"Ip {x} has been allowed successfully")



