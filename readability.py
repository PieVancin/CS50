import cs50


# inputs for the text
text = cs50.get_string("Text: ")

letters = 0
words = 0
sentences = 0
words = 1

for i in range(len(text)):
    # counts the letters
    if (text[i].isalpha()):
        letters += 1
    # counts the words
    elif (text[i].isspace()):
        words += 1
    # counts the sentences
    elif (text[i] == '.' or text[i] == '!' or text[i] == '?'):
        sentences += 1
# do the formula
l = float(letters / words * 100)
s = float(sentences / words * 100)
index = round((float)(0.0588 * l - 0.296 * s - 15.8))
    
# checks the grade
if (index >= 16):
    print("Grade 16+")
elif (index < 1):
    print("Before Grade 1")
else:
    print("Grade ", index)
