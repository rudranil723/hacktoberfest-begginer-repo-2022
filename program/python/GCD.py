def gcd(a,b): #gcd function
    while (b): #while b not equal to 0
        a,b=b,a%b 
    return abs(a)

a,b=map(int,input("Enter 2 numbers: ").split()) #take user input of 2 numbers
c=gcd(a,b) #call the gcd function
print("The gcd of ",a," and ",b," is ",c) #output the result