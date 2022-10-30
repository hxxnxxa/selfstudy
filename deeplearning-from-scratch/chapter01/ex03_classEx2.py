class Woman:
    def __init__(self, name, gender):
        self.name = name
        self.gender = gender
        print("Initialized")
        
    def hello(self):
        print("Hello " + self.name + "!")
        print("I`m a " + self.gender + ".")
        
    def goodbye(self):
        print("Good-bye " + self.name + "!")
        
w = Woman("Berra","girl")
w.hello()
w.goodbye()