import tkinter as tk

# Calculator Class
class Calculator:
    def __init__(self, root):
        # Set up main window
        self.root = root
        self.root.title("Calculator by Simplified Learner")
        self.root.geometry("400x500")
        self.root.config(bg="yellow")
        self.root.resizable(False, False)

        # Initialize display value
        self.scvalue = tk.StringVar()
        self.scvalue.set("")

        # Build UI components
        self.create_display()
        self.create_buttons()

    # Display Entry
    def create_display(self):
        screen_frame = tk.Frame(self.root, padx=10, pady=10)
        screen_frame.pack()
        screen = tk.Entry(screen_frame, textvar=self.scvalue, font="Arial 24 bold", bg="lightgrey", justify="right")
        screen.pack(fill="both", padx=10, pady=10)

    # Button layout and creation
    def create_buttons(self):
        buttons = [
            ["7", "8", "9", "+"],
            ["4", "5", "6", "-"],
            ["1", "2", "3", "*"],
            ["0", "C", "=", "/"]
        ]

        for row in buttons:
            button_frame = tk.Frame(self.root, bg="yellow")
            button_frame.pack(expand=True, fill="both")
            for text in row:
                button = tk.Button(button_frame, text=text, font="Arial 18 bold", padx=10, pady=10, 
                                   command=lambda t=text: self.on_button_click(t))
                button.pack(side="left", expand=True, fill="both")

    # Button click event handler
    def on_button_click(self, text):
        if text == "=":
            try:
                result = eval(self.scvalue.get())
                self.scvalue.set(result)
            except Exception:
                self.scvalue.set("Error")
        elif text == "C":
            self.scvalue.set("")
        else:
            self.scvalue.set(self.scvalue.get() + text)

# Run the Calculator
if __name__ == "__main__":
    root = tk.Tk()
    Calculator(root)
    root.mainloop()
