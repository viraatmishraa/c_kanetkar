import random
lettersCap="QWERTYUIOPASDFGHJKLZXCVBNM"
lettersSmall="qwertyuiopasdfghjklzxcvbnm"
numbers="1234567890"
specialChar="!@#$%^&*+-"
# this function will tackle the exceptions 
# in input that a user might enter
def is_valid():    
    try:
        lenOfPass=int(input("ENTER LENGTH OF PASSWORD :"))
        return lenOfPass
    except:
        print("enter valid input, try again!")
        main()
        

def main():
    print("WELCOME TO PASSWORD GENERATOR")
    lengthOfPass=is_valid()
    #this condtion makes the password to fall in 
    #strong category by excplicitly asking for a 
    #password bigger than 5 chars.
    if(lengthOfPass<5):
        print("passwords smaller than 5 are invalid for \"strong password\" catgoery \ntry again")
        main()


    print("HERE IS YOUR PASSWORD ! / THANK YOU" )
    charDecider=0
    word=""
    #instead on replying on random function which might
    # return user a repetetive or weak password 
    # out of pure luck, i explicitly made the password
    # contain all four chars
    # which makes the program on an average an edge
    # over all 1,945,805,859,770,572,800 possibilities
    # (approximately 2 quintillion)
    for j in range(lengthOfPass):
        if (charDecider==0):
            word=word+random.choice(lettersSmall)
        if (charDecider==1):
            word=word+random.choice(lettersCap)
        if(charDecider==2):
            word=word+random.choice(numbers)
        if(charDecider==3):
            word=word+random.choice(specialChar)
        if(charDecider==4):
            charDecider=0
        charDecider+=1
    print(word)
main()

        
        
