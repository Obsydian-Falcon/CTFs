import re
# Open the file and get the contents
with open('ceaser.cipher', 'r') as file: contents = file.read()
contents = re.sub('[!@#$%^&*(){}]', '', contents)

# Put each symbol into an array and erase any whitespace
symbols = list(contents.strip()) 
# make symbols lowercase
symbols = [symbol.lower() for symbol in symbols]
print(symbols)


# Decode the message
def decode(symbols: list, shift: int) -> str:
  message = ""
  for symbol in symbols:
    if symbol == '_': 
        message += '_'
        continue
    index = ord(symbol) - ord('a') # Make a consistent shift using 'a' to wraparound
    shift_index = (index - shift) % 26
    # ord converts chars to ascii values
    # Here, we subtract 3 from the ascii value for a backwards shift of 3
    # chr converts ascii values to chars
    message += chr(shift_index + ord('a'))

  return message

for i in range(26):
    print(decode(symbols, i))


