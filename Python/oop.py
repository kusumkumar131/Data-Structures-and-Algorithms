#inheritance
class Animal:
    def __init__(self, name):
        self.name = name

    def speak(self):
        raise NotImplementedError("Subclasses must implement this method")
class Dog(Animal):
    def speak(self):
        return f"{self.name} says Woof!"    

        