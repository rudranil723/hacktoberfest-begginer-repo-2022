#We have to count all the common characters in both strings(user input)
t=int(input("ENTER NUMBER OF TEST CASES: ")) #taking number of test cases

for i in range(t):            #looping for t test cases
    
    s1=input("ENTER STRING 1 : ") #taking input of the 2 strings
    s2=input("ENTER STRING 2 : ")
    ans=0                      #intializing a count variable to 0
    
    for j in s1:               #iterating through each character of first string
        if j in s2:            #checking if it is in the second string
            ans+=1             #if its present in both strings then increment the count variable
    
    print("THE NUMBER OF COMMON CHARACTERS IN YOUR GIVEN STRINGS IS ",ans) #printing the output