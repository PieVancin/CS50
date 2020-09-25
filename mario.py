from cs50 import get_int


    
# Asks the height of the wall
n = get_int("Height: ");
i = n

while(n>0 and n<9):
    if i==1:
     print("#")
     break
    elif i==2:
     print(" # \n##")
     break
    elif i==3:
     print("  #\n ##\n###")
     break
    elif i==4:
     print("   #\n  ##\n ###\n####")
     break
    elif i==5:
     print("    #\n   ##\n  ###\n ####\n#####")
     break
    elif i==6:
     print("     #\n    ##\n   ###\n  ####\n #####\n######")
     break
    elif i==7:
     print("      #\n     ##\n    ###\n   ####\n  #####\n ######\n#######")
     break
    elif i==8:
     print("       #\n      ##\n     ###\n    ####\n   #####\n  ######\n #######\n########")
     break
    
