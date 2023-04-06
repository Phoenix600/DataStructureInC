#import your modules here 
def palindromeString(string,index) : 
    if(index > (len(string)-1)/2) :
        return True
    if(string[index] != string[len(string)-1-index]) :
        return False 
    palindromeString(string,index+1)

print(f'{palindromeString("MADAM",0)}')

