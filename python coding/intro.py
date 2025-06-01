# Functions

def yvonne():
    print("Happy birthday to you")
def El():
    print("How old are you now")



yvonne()
yvonne()
yvonne()
El()
El()

#While true # Try is used when expecting an error... used with except
while True:
    try:
        num1=float(input("Enter a number: "))
        num2 = float(input("Enter a number: "))
        div=num2/num1
        print(f"your answer is{div}")
    except ZeroDivisionError as f:
        print(f"you have an error  {f}")
               







    
