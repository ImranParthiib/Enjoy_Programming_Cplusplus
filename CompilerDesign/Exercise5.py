import re

def lexical_analyzer(input_code):
    # Define keywords and operators
    keywords = ["int", "float", "if", "else", "while", "for", "return", "break", "continue", "switch", "case", "default", "char", "double", "struct", "enum", "void", "typedef", "sizeof", "auto", "extern", "static", "register", "const", "volatile", "signed", "unsigned", "short", "long", "double", "union", "do", "goto"]
    operators = ["+", "-", "*", "/", "=", "==", "!=", "<", ">", "<=", ">="]

    # Initialize lists to store tokens
    keywords_found = []
    identifiers_found = []
    operators_found = []

    # Split the input code into words
    words = re.findall(r'\b\w+\b', input_code)

    # Check each word for keywords, identifiers, and operators
    for word in words:
        if word in keywords:
            keywords_found.append(word)
        elif re.match(r'^[a-zA-Z_][a-zA-Z0-9_]*$', word):  # Check if the word is a valid identifier
            identifiers_found.append(word)
        elif word in operators:
            operators_found.append(word)

    # Display the results
    print("Keywords:", ", ".join(keywords_found) + ".")
    print("Identifiers:", ", ".join(identifiers_found) + ".")
    print("Operators:", ", ".join(operators_found) + ".")

# Sample input
sample_input = "int sum = a + b;"

# Analyze the sample input
lexical_analyzer(sample_input)
