/*

Consider the quadratic equation in standard form: ax2+bx+c = 0. The solution of the equation
depends on the value of the coecients a; b; c via the quadratic formula
x1 =
􀀀b 􀀀
p
d
2a
and x2 =
􀀀b +
p
d
2a
where d = b2 􀀀 4ac is called the discriminant. The discriminant determines the type of solutions:
Two distinct real solution( if d > 0 ), one double real solution (if d = 0), and two distinct complex
solutions ( if d < 0 ).
Write a program that uses double a, b, c, d; which asks the user to enter the value of the
coecients a, b, c. Note that a { the coecient of x2 can not be zero, for otherwise the equation is
at most linear. Your code should check that. Then the code computes the value of the discriminant
d. Based on the value of the discriminant d, the program will compute the solutions double x1,
x2;
In the negative determinant case, you should use two additional variables double xr, xi; where
xr = -b / (2a) and xi = sqrt(-d)/(2a).

*