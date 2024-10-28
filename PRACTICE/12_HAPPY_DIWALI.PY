import turtle

t = turtle.Turtle()
turtle.Screen().setup(500, 550)
turtle.Screen().bgcolor('black')

t.pencolor('red')
t.fillcolor('yellow')
t.begin_fill()
t.pensize(8)
t.speed(8)

t.right(60)
t.forward(200)
t.goto(0, 0)
t.right(60)
t.forward(200)
t.left(80)
t.circle(160, 78)
t.end_fill()

def set_position(x, y):
    t.penup()
    t.goto(x, y)
    t.pendown()

t.pensize(10)
set_position(-25, -40)
t.right(60)
t.circle(60, 48)

set_position(-43, -70)
t.right(60)
t.circle(75, 68)

set_position(15, -170)
t.pensize(8)
t.circle(30)

def star():
    t.pensize(2)
    t.pencolor('yellow')
    t.fillcolor('yellow')
    t.begin_fill()
    for i in range(5):
        t.forward(30)
        t.right(144)
    t.end_fill()
    t.pensize(10)
    t.pencolor('red')

def curly_star(setheading, circle_x, circle_y):
    set_position(0, 10)
    t.setheading(setheading)
    t.circle(circle_x, circle_y)
    star()

def straight_star(setheading, forward):
    set_position(0, 10)
    t.setheading(setheading)
    t.forward(forward)
    star()

curly_star(145, 75, 60)
curly_star(120, 150, 60)
curly_star(95, 200, 60)
straight_star(90, 200)
curly_star(85, -200, 60)
curly_star(60, -150, 60)
curly_star(35, -75, 60)

set_position(0, -260)
t.pencolor('yellow')
t.write('Happy Diwali', align='center', font=('Arial', 24, 'bold'))
t.hideturtle()

turtle.done()