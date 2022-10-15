using simple code
####################################################################
string = "Contribute to Hacktoberfest 2022!"
# reversing words in a given string
s = string.split()[::-1]
l = []
for i in s:
    # apending reversed words to l
    l.append(i)
# printing reverse words
print(" ".join(l))


using function
#####################################################################
def rev_sentence(sentence):
 
    words = sentence.split(' ')
    reverse_sentence = ' '.join(reversed(words))
    return reverse_sentence
 
if __name__ == "__main__":
    input = 'geeks quiz practice code'
    print (rev_sentence(input))
