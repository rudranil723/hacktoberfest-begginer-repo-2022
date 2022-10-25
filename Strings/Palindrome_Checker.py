#We have to check if the given string input is a valid palindrome 
t=int(input("ENTER NUMBER OF TEST CASES: ")) #taking number of test cases

for i in range(t):            #looping for t test cases
    
    s=input("ENTER STRING: ") #taking input of the string
    
    #if s==s[::-1]:            
                              #s[::-1] reverses the string in python
    for i in range(0, int(len(str)/2)):
        if str[i] != str[len(str)-i-1]:   #checking if the reverse of the string is equal to the original string
   
        print("GIVEN STRING ",s," IS A VALID PALINDROME") #if True then print it is a palindrome
    else:
        print("GIVEN STRING ",s," IS NOT A VALID PALINDROME") #if False then print it is not a palindrome
