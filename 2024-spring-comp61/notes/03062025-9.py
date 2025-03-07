class MessageFormatter:
    def __init__(self, msg):
        self.msg = msg

    def format_message(self):
        formatted = ""
        i = 0

        while i < len(self.msg) - 1:
            formatted += self.msg[i].upper()
            i += 1
        return formatted

def display_message():
    formatter = MessageFormatter("hello")
    msg = formatter.format_message()

    if msg == "HELLO":
        print("Message formatted correctly!")
    else:
        print("Message formatting error!")

def main():
    display_message()

main()

# Expected Output (if the logic were implemented correctly):
# Message formatted correctly!
