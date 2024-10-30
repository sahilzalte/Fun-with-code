#  this for simple graphics project
import turtle as r
import colorsys as sm

r.tracer(2)  # Speed up drawing
r.bgcolor("black")  # Set the background color to black
r.pensize(2)  # Set the pen size
n = 100  # Number of color variations
h = 0  # Initial hue value

# Drawing loop
for i in range(500):
    for j in range(4):
        c = sm.hsv_to_rgb(h, 1, 1)  # Convert HSV to RGB for smooth color transitions
        h += 1/n  # Increment hue value
        r.color(c)  # Set pen color to the converted color
        r.circle(49 + j * 5, 90)  # Draw a circle with increasing radius
        r.forward(100)  # Move forward
        r.left(90)  # Turn left by 90 degrees
    r.right(10)  # Rotate the entire pattern slightly to create a spiral effect

r.done()  # Finish the drawing
