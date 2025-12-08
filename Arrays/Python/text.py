import re


paragraph = """
Hello! This is a sample paragraph with numbers 123, special characters @#$%, and punctuation: commas, periods, exclamation marks!
It has multiple lines.
This is the second line with more text, including UPPERCASE and lowercase words.
"""

print("Original Paragraph:")
print(paragraph)


lowercase_text = paragraph.lower()
print("\nLowercase:")
print(lowercase_text)


uppercase_text = paragraph.upper()
print("\nUppercase:")
print(uppercase_text)


cleaned_text = re.sub(r'[^a-zA-Z\s]', '', paragraph)
print("\nAfter removing special characters and numbers:")
print(cleaned_text)



import string
no_punct_text = paragraph.translate(str.maketrans('', '', string.punctuation))
print("\nAfter removing punctuation:")
print(no_punct_text)


tokens = cleaned_text.split()
print("\nTokens (after cleaning):")
print(tokens)
